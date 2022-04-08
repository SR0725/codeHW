#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iomanip>

using namespace std;

int main(){
    std::cout << sizeof(int) << '\n';
    std::cout << sizeof(float) << '\n';
    int* theArray = new int[10];
    for( int i = 0; i < 10; i++ ){
        theArray[i] = i;
    }

    for( int i = 0; i < 10; i++ ){
        printf("%d ", theArray[i]);
        printf("%f\n", theArray[i]);
    }
}
