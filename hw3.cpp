#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
typedef void (*FunPtr)(int *, int);

using namespace std;
void showArrayH(int *, int);
void showArrayV(int *, int);
void showArrayRC(int *, int);
void showData(int*, int, FunPtr);
int random_int(int,int);


int main(){
    int data[100];
    for(int i = 0; i < 100; i++){
        data[i] = random_int(0, 100);
    }
    for(;;){
        std::cout <<  "//-----------------------------------" << endl <<
                        "列印功能選項：" << endl <<
                        "1 印在同一橫列(row)" << endl <<
                        "2 印在同一直欄(column)" << endl <<
                        "3 以每列 5 個資料的格式，逐一列印資料。" << endl <<
                        "4 離開" << endl <<
                        "//-----------------------------------" << endl;
        int input;
        std::cin >> input;
        switch(input){
            case 1:
                showData(data, 100, showArrayH);
                break;
            case 2:
                showData(data, 100, showArrayV);
                break;
            case 3:
                showData(data, 100, showArrayRC);
                break;
            case 4:
                return 0;
        }

    }
    return 0;
}

void showData(int *ary, int len, FunPtr fptr) {
	fptr(ary, len);
}

void showArrayH(int *data, int len){
    for(int i = 0; i < len; i++){
        cout << data[i] << " ";
    }
}

void showArrayV(int *data, int len){
    for(int i = 0; i < len; i++){
        cout << data[i] << endl;
    }
}

void showArrayRC(int *data, int len){
    for(int i = 0; i < len; i++){
        for(int j = 0; j < 5; j++){
            cout << data[i] << " ";
            i ++;
        }
        cout << endl;
    }
}


int random_int(int min,int max){
    return (max - min) * rand() / (RAND_MAX + 1.0) + min;
}
