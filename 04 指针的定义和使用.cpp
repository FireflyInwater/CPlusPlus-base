#include <iostream>
using namespace std;

int main(){
    int a =10;
    int *p; //指针定义语法：数据类型 * 指针变量名
    p  = &a; //记录地址
    cout<<&a<<endl;
    cout<<p<<endl;
    *p = 20 ;
    cout<<a<<endl; //输出20
    return 0;
}