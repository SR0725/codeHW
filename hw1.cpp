#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
int random_int(int,int);
int* random_Array(int);
void sortBySmallToBig(int*,int);
void sortByBigToSmall(int*,int);
void sortTest(int*,int);


int main()
{
    srand( time(NULL) );
    int array1Lengh = random_int(10, 20);
    int *array1 = random_Array(array1Lengh);
    int array2Lengh = random_int(10, 20);
    int *array2 = random_Array(array2Lengh);
    int array3Lengh = random_int(10, 20);
    int *array3 = random_Array(array3Lengh);

    sortByBigToSmall(array1, array1Lengh);
    sortBySmallToBig(array2, array1Lengh);
    sortTest(array1, array1Lengh);
    sortTest(array2, array2Lengh);
    sortTest(array3, array3Lengh);


    delete [] array1;
    delete [] array2;
    delete [] array3;

}

void sortTest(int *array,int arrayLengh){
    bool bigToSmallSortedFlag = true;
    bool SmallToBigSortedFlag = true;
    for( int i = 0; i < arrayLengh; i++ ){

        if(array[i + 1] < array[i]){
            SmallToBigSortedFlag = false;
            break;
        }
    }

    for( int i = 0; i < arrayLengh-1; i++ ){
        if(array[i + 1] > array[i]){
            bigToSmallSortedFlag = false;
            break;
        }
    }
    if(bigToSmallSortedFlag == true){
        std::cout << "���}�C�g�L�ƦC�A�Ѥj�Ӥp" << '\n';
    }else if(SmallToBigSortedFlag == true){
        std::cout << "���}�C�g�L�ƦC�A�Ѥp�Ӥj" << '\n';
    }else{
        std::cout << "���}�C���g�L�ƦC" << '\n';
    }

}

void sortBySmallToBig(int *array,int arrayLengh){
    for( int i = 0; i < arrayLengh; i++ ){
        for( int j = 0; j < arrayLengh; j++ ){
            if(array[j + 1] < array[j]){
                int temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
            }
        }
    }
}

void sortByBigToSmall(int *array,int arrayLengh){
    for( int i = 0; i < arrayLengh; i++ ){
        for( int j = 0; j < arrayLengh; j++ ){
            if(array[j + 1] > array[j]){
                int temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
            }
        }
    }
}

int* random_Array(int arrayLengh){
    int *arr = new int[arrayLengh];
    for( int i = 0; i < arrayLengh; i++ ){
        arr[i] = random_int(0, 99);
    }
    return arr;
}


int random_int(int min,int max){
  return (max - min) * rand() / (RAND_MAX + 1.0) + min;
}
