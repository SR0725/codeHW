
#include <iostream>
#include "math.h"
using namespace std;

template <class T>
class MyTriangle {
private:
    T a, b, c;
public:
    // 請為其添加適當的建構函式(constructor)。
    MyTriangle(){
      this->a = 1;
      this->b = 1;
      this->c = 1;
    }
    MyTriangle(T len){
      this->a = len;
      this->b = len;
      this->c = len;
    }
    MyTriangle(T len1, T len2){
        this->a = len1;
        this->b = len1;
        this->c = len2;


      if( !isAvailable() ){
        this->a = 0;
        this->b = 0;
        this->c = 0;
      }
    }
    MyTriangle(T len1, T len2, T len3){
        this->a = len1;
        this->b = len2;
        this->c = len3;

      if( !isAvailable() ){
        this->a = 0;
        this->b = 0;
        this->c = 0;
      }
    }

    bool isAvailable() {
        T maxLen = this->a;
        T otherLens = this->b + this->c;
        if(maxLen < this->b){
            maxLen = this->b;
            otherLens = this->a + this->c;
        }
        if(maxLen < this->c){
            maxLen = this->c;
            otherLens = this->a + this->b;
        }
        if(maxLen > otherLens){
    		return false;
        }else{
    		return true;
        }
    }

    float area() {
        float s = (this->a +this->b+this->c)/2.0;
	    return sqrt(s*(s - this->a)*(s - this->b)*(s - this->c));
    }

    float perimeter() {
        return this->a+this->b+this->c;
    }

    void show() {
    	cout << "三角形，邊長" << a << ", " << b << ", " << c << endl;
    	cout << "area:" << area() << endl;
    	cout << "perimeter:" << perimeter() << endl;
    }

    void showAll() {
        cout << "Class: MyTriangle" << endl;
        show();
    }
};

int main(){
    MyTriangle<int> triangle1;
    MyTriangle<int> triangle2(2);
    MyTriangle<int> triangle3(3,4);
    MyTriangle<int> triangle4(5,6,7);

    triangle1.show();
    triangle2.show();
    triangle3.show();
    triangle4.show();

}
