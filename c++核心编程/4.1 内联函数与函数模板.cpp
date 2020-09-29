#include<iostream>
using namespace std;

template <typename T> //函数模板声明

inline T sum(T a,T b){ //inline 表示内联函数，在编译时会将代码块嵌入
    cout<<a+b<<endl;
}

int main(){
    int x1=1;
    int y1=2;
    double x2 = 1.1;
    double y2 = 1.2;
    sum(x1,y1);
    sum(x2,y2);
    return 0;
}