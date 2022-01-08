#include <stdio.h>
#include <math.h>
void listSumOfTwoSqrt(int);    //宣告listSumOfTwoSqrt FUNCTION
void listSumOfTwoSqrt(int num){
    int count = 0;    //宣告一個變數用來記錄這個數字有多少個因數和
    for(int y = 0; y <= sqrt(num); y++){    //因為任何一個因數都不可能大於這個數字的開根號所以Y <= sqrt(num)https://github.com/SR0725/codeHW7_1/blob/main/hw.c
        for(int x = 0; x <= y; x++){    //為了避免重複數值顯示 X必定小於等於Y
            if(x*x + y*y == num){    //找到他的因數合時
                printf("\nx=%d,y=%d, %d^2 + %d^2 = %d", x, y, x, y, num);    //顯示訊息
                count += 1;    //變數加一
            }
        }
    }
    if(count == 0){    //如果這個數字的因數合為0 告知NOT FOUND
        printf("Not found.");
    }
}

int main ()
{
   int inputNum;    //宣告輸入數字
   printf("Please enter a number:");    //顯示告知訊息
   scanf("%d", &inputNum);    //讀取輸入數字
   listSumOfTwoSqrt(inputNum);    //將輸入數值送入listSumOfTwoSqrt並處理
   return(0);
}
