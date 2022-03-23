



///////////////////////////////////
//地一題
#include <iostream>

int main(){
    int currValue = 0,
        val = 0;

    if (std::cin >> currValue){
        int cnt = 1;
        while (std::cin >> val){
            if (val == currValue)
                ++cnt;
            else {
                std::cout << currValue << " occues " << cnt << " times" << std::endl;
                currValue = val;
                cnt = 1;
            }
        }
        std::cout << currValue << " occues " << cnt << " times" << std::endl;
    }
    return 0;
}




///////////////////////////////////
//地2題
#include <iostream>
#include <ctime>
#include <stdlib.h>
void selection_sort(int a[], int len);

int main(){
    srand( time(NULL) );
    clock_t firstTime, lastTime;
    int * array;

    int len = 5000;
    array = new int [len];
    for (int i = 0; i < len; i++){
        array[i] = 999 * rand() / (RAND_MAX + 1.0);
    }
    firstTime = clock();
    selection_sort(array, len);
    lastTime = clock();
    std::cout << len << " selection_sort use Time: " << lastTime - firstTime << " microseconds" << std::endl;

    len = 20000;
    array = new int [len];
    for (int i = 0; i < len; i++){
        array[i] = 999 * rand() / (RAND_MAX + 1.0);
    }
    firstTime = clock();
    selection_sort(array, len);
    lastTime = clock();
    std::cout << len << " selection_sort use Time: " << lastTime - firstTime << " microseconds" << std::endl;

    len = 200000;
    array = new int [len];
    for (int i = 0; i < len; i++){
        array[i] = 999 * rand() / (RAND_MAX + 1.0);
    }
    firstTime = clock();
    selection_sort(array, len);
    lastTime = clock();
    std::cout << len << " selection_sort use Time: " << lastTime - firstTime << " microseconds" << std::endl;


    delete [] array;
    return 0;
}

void selection_sort(int a[], int len)
{
    int i,j,temp;

    for (i = 0 ; i < len - 1 ; i++){
        int min = i;
        for (j = i + 1; j < len; j++){
            if (a[j] < a[min]){
                min = j;
            }
        }
        if(min != i){
            temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }
    }
}





///////////////////////////////////
//地3題
#include <iostream>
#include <iomanip>

using namespace std;

struct Circle {
	float r = 1;  // 給預設值！

	// this: 表示指向目前所描述物件的指標！
	Circle(float r) { this->r = r; }  // 建構函式！

	const float pi = 3.14159f;

	float area() {
		return r*r*pi;
	}
	float perimeter() {
		return 2*pi*r;
	}
	void show() {
		cout << "circle\n半徑 " << r << endl;
		cout << "面積: " << fixed  <<  setprecision(2) << area() << endl;
		cout << "周長: " << fixed  <<  setprecision(1) << perimeter() << endl;
	}
};

int main(){

    // 宣告變數，並給初值:
    Circle cir1(1), cir2(2), cir3(3);
    Circle cir4 = Circle(4);

    // 宣告陣列變數，並給初值:
    Circle cirs[2] = {Circle(10), Circle(20)};  // 使用"建構函式"建立結構物件！

    // 使用物件來呼叫其成員函式:
    cir1.show();
    cirs[1].show();
    return 0;

}
