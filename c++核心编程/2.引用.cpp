//引用：给变量起别名
//语法： 数据类型 &别名 = 原名

// 取别名后，两者的操作都是对同一块内存操作
// 注意：引用必须初始化，且不可再更改
#include<iostream>
using namespace std;


//引用做参数：函数参数传递时，引用传递方式可以利用形参修改实参
void swap(int &a,int &b){
    int temp = a;
    a=b;
    b=temp; 
}


// 常量引用：const type & var 
// 使用场景：用来修饰形参，防止参数传递后被修改（误操作）。
void swap(const int &a,const int &b){
    int temp = a;
    a=b;
    b=temp; 
}

// 如果函数的返回值是引用，函数调用可以作为左值；
int main(){
    int a = 10;
    int &b = a ;//b是a的别名
    int x = 20;
    int y  = 30;
    swap(x,y);
    cout<<x<<y<<endl;
    return 0;
}