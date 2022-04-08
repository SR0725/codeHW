#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iomanip>

using namespace std;
void myTable9x9();
void myTable9x9(int);
void myTable9x9(int, int);


int main(){
    std::cout << "myTable9x9():" << '\n';
    myTable9x9();
    std::cout << "myTable9x9(3):" << '\n';
    myTable9x9(3);
    std::cout << "myTable9x9(3,9):" << '\n';
    myTable9x9(3,9);
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
