
#include <iostream>
#include "math.h"
using namespace std;

int lotteryNos[42];  // 儲存樂透的所有號碼: 1 ~ 42。

class LotteryGame {
private:
    int lucky[6];  // 儲存六個不同數字的樂透開獎號碼。
    void reset(int *ary);  // to reset the lucky array

public:
    int lottery[6];  // 儲存隨機生成的六個不同數字的樂透號碼。

    bool isAvailable(int numebr6[]) {  // 確認是否符合樂透號碼的範圍與規定。
    }

    void genLuckyNumbers() {   // 隨機生成一組樂透開獎號碼。
    	shuffle();
    	for(int i = 0; i < 6; i++){
            lucky[i] = lotteryNos[i];
        }
        sort0(lucky, 6);
    }

	void randomGenLottery() {  // 隨機生成一組 lottery 的值，電腦選號。
	    shuffle();
    	for(int i = 0; i < 6; i++){
            lottery[i] = lotteryNos[i];
        }
        sort0(lottery, 6);
	}

    int sameValue(int lot[], int luc[]) {  // 核對 lot 與 luc 對中幾個相同的數字。
        int same = 0;
        for(int i = 0; i < 6; i++){
            for(int j = 0; j < 6; j++){
                if( lottery[i] == lucky[j]){
                    same ++;
                    break;
                }
            }
        }
        return same;
    }

    void reset() {  // 重設樂透的開獎號碼。
		for (int k = 0; k < 42; ++k){
		    lotteryNos[k] = k+1;
		}
		genLuckyNumbers();
    }

    void analyzeProbability(int num){
        int times[7] = {0,0,0,0,0,0,0};
        float probabilitys[7] = {0,0,0,0,0,0,0};

        reset();
        for(int i = 0; i < num; i++){
            randomGenLottery();
            times[sameValue(lottery, lucky)] += 1;
        }
        for(int i = 0; i < 7; i++){
            probabilitys[i] = (float) times[i] / (float) num;
        }
        cout << "沒對中" << probabilitys[0] << endl;
        cout << "對中一碼" << probabilitys[1] << endl;
        cout << "對中兩碼" << probabilitys[2] << endl;
        cout << "對中三碼" << probabilitys[3] << endl;
        cout << "對中四碼" << probabilitys[4] << endl;
        cout << "對中五碼" << probabilitys[5] << endl;
        cout << "對中六碼" << probabilitys[6] << endl;

    }

    void showResult() {
        cout << "開獎號碼" << endl;
		show(lucky);
		cout << "樂透號碼" << endl;
		show(lottery);
		cout << "對中數量" << endl;
		cout << sameValue(lottery, lucky) << endl;
	}

	void show(int data[], int len=6) {
		for (int  k = 0; k < len; ++k) {
			if (k == 0)
				cout << data[k];
			else
				cout << " " << data[k];
		}
		cout << endl;
	}

	void shuffle(int times = 500) {  // 隨機交換 lotteryNos 的內容 times 次！
		int p, q;
		srand(time(0));

		for (int k = 0; k < times; ++k)
		{   // randomly select two elements, and then swap their values.
			p = rand() % 42;  // 0 <= rand() % 42 < 42
			q = rand() % 42;
			if (p != q)
			{
				int t = lotteryNos[p];
				lotteryNos[p] = lotteryNos[q];
				lotteryNos[q] = t;
			}
		}
	}

    void sort0(int data[], int len) {  // 對輸入的陣列 data，進行由小到大的排列。
		for (int p = 0; p < len-1; ++p) {
			for (int q = p+1; q < len; ++q) {
				if ( data[p] > data[q] ) {
					int temp = data[p];
					data[p] = data[q];
					data[q] = temp;
				}
			}
		}
    }
};
int main(){
    LotteryGame lotteryGame;
    lotteryGame.reset();
    for(int i = 0; i < 10; i ++){
        lotteryGame.randomGenLottery();
        lotteryGame.showResult();
    }


    lotteryGame.analyzeProbability(10000);

}
