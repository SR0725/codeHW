
#include <iostream>
#include "math.h"
using namespace std;

char *starSignName[] = {
    "魔羯座","水瓶座","雙魚座","牡羊座","金牛座","雙子座",
    "巨蟹座","獅子座","處女座","天秤座","天蠍座","射手座"
};

class StarSign {
public:
    int monthDay[12] = {31,28,31,30,31,30,31,31,30,31,30};

    int starSignM_start[12] = {12,1,2,3,4,5,6,7,8,9,10,11};
    int starSignD_start[12] = {22,20,19,21,20,21,21,23,23,23,23,22};

    int readMonthDate() {
        int month = 0,
            day = 0;
        std::cout << "請輸入出生月與日(中間以空格隔開):" << std::endl;
        cin >> month >> day;
        if(month == day && day == 0){
            return 0;
        }
        if(checkDays(month, day)){
            whichStarSign(month, day);
        }else{
            std::cout << "日期資料輸入錯誤" << std::endl;
        }
        /*
        1)首先印出提示訊息 "請輸入出生月與日(中間以空格隔開):"，
          來告知使用者輸入出生月日的資料。
        2)日期錯誤時，提示 "日期資料輸入錯誤！"。
          日期正確時，則印出對應的 星座 與 該星座的日期範圍。
        */

    }

    bool checkDays(int m, int d) {
        bool result = true;
        if(m > 12 || m < 1){
            result = false;
        }else if(d > monthDay[m] && d < 1){
            result = false;
        }
        return result;
    }

    void * whichStarSign(int m, int d) {
        int starSignNumber = -1;
        for(int i = 0; i < 12; i ++){
            if(starSignM_start[i] == m){
                if(d >= starSignD_start[i]){
                    starSignNumber = i;
                }else{
                    starSignNumber = i-1;
                    if(starSignNumber < 0){
                        starSignNumber = 11;
                    }
                }
            }
        }
        cout << starSignName[starSignNumber] << endl;
    }
};

int main(){
    StarSign starSign;
    for(;;){
        if( starSign.readMonthDate() == 0){
            break;
        }
    }

}
