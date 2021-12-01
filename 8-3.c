#include <stdio.h>

int main(){
  int input[30];    //宣告輸入數列
  int i = 0;  //宣告判定輸入到第幾位數值得flag
  int inputEnd = 0;  //宣告變數用來儲存使用者輸入字元長度
  printf("Enter a number: ");
  while(i < 30 && (input[i] = getchar()) != '\n'){  //如果i小於10的情況下且使用者未按下enter則將使用者每個輸入的字元存入input陣列中
    i++;
    flag = i;
  }

  printf("Converted string: ");
  for (int j = 0; j < flag; j ++){   //判斷並輸出
    if(input[j] < '0' || input[j] > '9'){
      break;
    }else if(input[j] != '2'){
      printf("F");
    }else{
      printf("T");
    }
  }
  return 0;
}
