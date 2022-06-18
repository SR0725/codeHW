#include <iostream>
#include <vector>

using namespace std;

class Matrix3 {
private:
    int mat[3][3];

public:
    Matrix3(){
        for (int i = 0; i < 3; i ++){
            for (int j = 0; j < 3; j ++){
                if(i == j){
                    mat[i][j] = 1;
                }else{
                    mat[i][j] = 0;
                }
            }
        }
    }

    Matrix3(int* ary, int len){
        int index = 0;
        for (int i = 0; i < 3; i ++){
            for (int j = 0; j < 3; j ++){
                if(index < len){
                    mat[i][j] = ary[index++];
                }else{
                    mat[i][j] = 0;
                }
            }
        }
    }

    friend Matrix3 operator + (const Matrix3& m1, const Matrix3& m2){
        int resultArray[9];
        for (int i = 0; i < 3; i ++){
            for (int j = 0; j < 3; j ++){
                resultArray[i*3+j] = m1.mat[i][j] + m2.mat[i][j];
            }
        }
        Matrix3 result = Matrix3(resultArray,9);
        return result;
    };

    friend Matrix3 operator - (const Matrix3& m1, const Matrix3& m2){
        int resultArray[9];
        for (int i = 0; i < 3; i ++){
            for (int j = 0; j < 3; j ++){
                resultArray[i*3+j] = m1.mat[i][j] - m2.mat[i][j];
            }
        }
        Matrix3 result = Matrix3(resultArray,9);
        return result;
    };

    friend Matrix3 operator * (const Matrix3& m1, const Matrix3& m2){
        int resultArray[9] = {0,0,0,0,0,0,0,0,0};
        for (int i = 0; i < 3; i ++){
            for (int j = 0; j < 3; j ++){
                for (int k = 0; k < 3; k ++){
                    resultArray[i*3+j] = resultArray[i*3+j] + m1.mat[i][k] * m2.mat[k][j];
                }
            }
        }
        Matrix3 result = Matrix3(resultArray,9);
        return result;
    };

    friend Matrix3 operator * (const Matrix3& m1,const int scale){
        int resultArray[9] = {0,0,0,0,0,0,0,0,0};
        for (int i = 0; i < 3; i ++){
            for (int j = 0; j < 3; j ++){
                for (int k = 0; k < 3; k ++){
                    resultArray[i*3+j] = m1.mat[i][j] * scale;
                }
            }
        }
        Matrix3 result = Matrix3(resultArray,9);
        return result;
    };

    friend Matrix3 operator * (const int scale,const Matrix3& m2);

    friend ostream& operator<<(ostream& out, const Matrix3& m){
        for (int i = 0; i < 3; i ++){
            out << '[';
            for (int j = 0; j < 3; j ++){
                out << m.mat[i][j];
                if(j != 2){
                    out << " ";
                }
            }
            out << ']' << endl;
        }
        return out;
    };
};

int main()
{
    int mat1[9] = {
        1,2,3,
        0,1,4,
        0,0,1
    };

    int mat2[9] = {
        1,0,0,
        2,1,0,
        3,4,1
    };
    Matrix3 matrix1 = Matrix3(mat1,9);
    Matrix3 matrix2 = Matrix3(mat2,9);
    Matrix3 matrixAnswer1;
    matrixAnswer1 = matrix1 + matrix2;
    cout << matrix1 << "+ \n" << matrix2 << "= \n" << matrixAnswer1 << endl;

    Matrix3 matrixAnswer2;
    matrixAnswer2 = matrix1 * matrix2;
    cout << matrix1 << "* \n" << matrix2 << "= \n" << matrixAnswer2;
}
