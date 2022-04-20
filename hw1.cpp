
#include <iostream>
#include <cstdlib> /* 亂數相關函數 */
#include <ctime>   /* 時間相關函數 */
#define ARRAYLEN 46
using namespace std;
template <class T>
T randomNumber(T min, T max)
{
    return (T)((max - min) * (rand() / (RAND_MAX + 1.0))) + min;
}

template <class T>
void randomArray(T* array, T len)
{
    for(int i = 0; i < len; i++){
        array[i] = randomNumber(1, 100);
    }
}

int main(){
    int* array;
    array = new int [ARRAYLEN];
    randomArray(array, ARRAYLEN);
    for(int i = 0; i < ARRAYLEN; i++){
        cout  << array[i] << endl;
    }

    delete [] array;

}
