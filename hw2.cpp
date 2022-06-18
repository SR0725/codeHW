#include <iostream>
#include <vector>

using namespace std;

class LongInt {
private:
    vector<int> value;

public:
    LongInt(){}

    LongInt(int input){
        while(input > 0){
            value.insert(value.begin(), input%10);
            input /= 10;
        }
    }

    LongInt(char* inputStr){
        int index = 0;
        while(true){
            if(inputStr[index] == '\0'){
                break;
            }
            value.push_back(inputStr[index++]-'0');
        }
    }

    LongInt(string inputStr){
        int index = 0;
        while(true){
            if(inputStr[index] == '\0'){
                break;
            }
            value.push_back(inputStr[index++]-'0');
        }
    }

    friend LongInt operator + (const LongInt& l1, const LongInt& l2){
        LongInt result;
        LongInt bePlusMatrix;
        if(l1.value.size() >= l2.value.size()){
            result.value.resize(l1.value.size());
            for(int i=0; i < l1.value.size(); i ++){
                result.value[i] = l1.value[i];
            }
            bePlusMatrix = l2;
        }else{
            result.value.resize(l2.value.size());
            for(int i=0; i < l2.value.size(); i ++){
                result.value[i] = l2.value[i];
            }
            bePlusMatrix = l1;
        }

        for(int i = bePlusMatrix.value.size()-1; i >= 0; i --){
            int p = result.value.size() - bePlusMatrix.value.size() + i;
            if(result.value[p] + bePlusMatrix.value[i] >= 10){
                result.value[p] = (result.value[p] + bePlusMatrix.value[i]) % 10;
                if(p-1 < 0){
                    result.value.insert(result.value.begin(), 1);
                }else{
                    while(true){
                        if(p-1 < 0){
                            result.value.insert(result.value.begin(), 1);
                            p = 0;
                        }
                        if(result.value[p-1] != 9){
                            result.value[p-1] += 1;
                            break;
                        }else{
                            result.value[p-1] = 0;
                            p --;
                        }
                    }
                }
            }else{
                result.value[p] = (result.value[p] + bePlusMatrix.value[i]) % 10;
            }
        }

        return result;
    };

    friend LongInt operator * (const LongInt& l1, const LongInt& l2){
        LongInt result;

        for(int i = l2.value.size()-1; i >= 0; i --){
            LongInt temp;
            for(int j = 0;j < l2.value[i];j ++){
                temp = temp + l1;
            }
            int multiple = l2.value.size() - i - 1;
            for(int j = 0;j < multiple;j ++){
                temp.value.push_back(0);
            }
            result = result + temp;
        }

        return result;
    };





    friend ostream& operator<<(ostream& out, const LongInt& longInt){
        for (int i = 0; i < longInt.value.size(); i ++){
            out << longInt.value[i];
        }
        return out;
    };
};

int main()
{
    LongInt input1 = LongInt("123456789123456789");
    LongInt input2 = LongInt("12345678987654321");

    cout << input1 << "+" << input2 << "=" << input1 + input2 << '\n';
    cout << input1 << "*" << input2 << "=" << input1 * input2 << '\n';


    for (int i = 1; i <= 25; i++) {
        LongInt answer = LongInt(1);
        for (int j = 1; j <= i; j++) {
            LongInt mult = LongInt(j);
            answer = answer * mult;
        }
        cout << i << "!=" << answer << endl;
    }
}
