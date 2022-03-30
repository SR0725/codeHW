#include <iostream>

using namespace std;

class Triangle{
    private:
        float r[3];

    public:

        Triangle(float input_a,float input_b,float input_c) {
            r[0] = input_a;
            r[1] = input_b;
            r[2] = input_c;
        }

        void isAvailable(){
            float maxLength = 0;
            float otherLength = 0;
            float maxFlag = 0;
            for (int i = 0; i < 3; i++) {
                if(r[i] > maxLength){
                    maxLength = r[i];
                    maxFlag = i;
                }
            }

            for (int i = 0; i < 3; i++) {
                if(i != maxFlag){
                    otherLength += r[i];
                }
            }

            if(otherLength > maxLength){
                std::cout << "是三角形" << '\n';
            }else{
                std::cout << "不是三角形" << '\n';
            }

        }

        void ResetTriangle(float input_a,float input_b,float input_c) {
            r[0] = input_a;
            r[1] = input_b;
            r[2] = input_c;
        }

};

int main() {
    Triangle triangle1(3,1,1);
    Triangle triangle2(5,3,3);
    Triangle triangle3(6,7,9);

    triangle1.isAvailable();
    triangle2.isAvailable();
    triangle3.isAvailable();

    return 0;
}
