#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
#include <conio.h>
#include <conio.h>
#include <cstring>

using namespace std;
void myTable9x9();
void myTable9x9(int);
void myTable9x9(int, int);

int main(){
    string input;
    int inputInt[10],inputIntLength = 0;
    getline(cin, input);

    for (int i = 0; i < input.length(); i++) {
        if(input[i] > 47 && input[i] <= 57){
            inputInt[inputIntLength] = input[i] - 48;
            inputIntLength++;
        }
    }
    if(inputIntLength == 0){
        myTable9x9();
    }else if(inputIntLength == 1){
        myTable9x9(inputInt[0]);
    }else{
        myTable9x9(inputInt[0], inputInt[1]);
    }

}

void myTable9x9(){
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            cout << i << "x" << j << "=" << setw(2) << right << i*j << " ";
        }
        std::cout << '\n';
    }
}

void myTable9x9(int row){
    for (int i = row; i <= row; i++) {
        for (int j = 1; j <= 9; j++) {
            cout << i << "x" << j << "=" << setw(2) << right << i*j << " ";
        }
        std::cout << '\n';
    }
}

void myTable9x9(int row_min, int row_max){
    for (int i = row_min; i <= row_max; i++) {
        for (int j = 1; j <= 9; j++) {
            cout << i << "x" << j << "=" << setw(2) << right << i*j << " ";
        }
        std::cout << '\n';
    }
}
