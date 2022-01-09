#include <stdio.h>
#define SIZE 5

int main ()
{
   int num1[SIZE];  //宣告一陣列用來儲存第一個輸入的陣列
   int num2[SIZE];  //宣告一陣列用來儲存第二個輸入的陣列
   int sameNum[SIZE];   //宣告一陣列用來儲存相同的數值
   int sameNumIndex = 0; //計入sameNum這個陣列目前儲存了幾個數值
   printf("Enter 5 numbers for 1st array:");
   for (int i = 0; i < SIZE; i++){
       scanf("%d", &num1[i]);  //將使用者輸入的數字 放到num1陣列的第i個"位置"
   }

   printf("Enter 5 numbers for 2st array:");
   for (int i = 0; i < SIZE; i++){
       scanf("%d", &num2[i]);  //將使用者輸入的數字 放到num2陣列的第i個"位置"
   }

   for (int i = 0; i < SIZE; i++){
       for (int j = 0; j < SIZE; j++){
           if(num1[i] == num2[j]){  //如果找到兩個陣列相同的數值時
               sameNum[sameNumIndex] = num1[i];  //將這個數值放入sameNum
               sameNumIndex += 1;  //將sameNumIndex的數值加一
               break;
           }
       }
   }
   printf("Intersection is {");
   for (int i = 0; i < sameNumIndex; i++){
       printf("%d", sameNum[i]);

       if(i != sameNumIndex-1){
           printf(",");
       }else{
           printf("}");
       }
   }
}
