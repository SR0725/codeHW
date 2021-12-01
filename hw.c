#include <stdio.h>

int main(){
  char input[10];       //輸入數列
  int successFlag = 1;  //紀錄數字是否為八進制數字
  int i = 0;            //輸入數列的第幾個數字
  while(i < 10 && (input[i] = getchar()) != '\n'){  //如果i小於10的情況下且使用者未按下enter則將使用者每個輸入的字元存入input陣列中
    if(input[i] < 48 || input[i] > 55){             //每次輸入一個數字判斷是否為八進制(由於輸入為字元 是以ASCII碼儲存)
      successFlag = 0;                              //將 successFlag 
      /*改成 0 值得一提的是由於沒有其他程式能將其改成1 所以一旦存在一個數值並非0~7之間則successFlag永遠為0 反之為1*/
      break;
    }
    i++;
  }

  if(successFlag == 1){  //如果是八進制
    printf("This is an octal number.");
  }else{                 //如果不是
    printf("Not a number.");
  }
  return 0;
}
