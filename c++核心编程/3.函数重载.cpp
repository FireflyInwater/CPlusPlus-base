/*
函数名称相同，但是可以功能不同，提高代码的复用性
*/

#include<iostream>
using namespace std;

//函数重载的条件
//1、同一个作用域下
//2、函数名称相同
//3、函数参数类型不同、或者个数不同、或者顺序不同

//注意：函数返回值类型不是作为重载的条件

void func(){
    cout<<"func 调用"<<endl;
}

void func(int a ){
    cout<<"func a 调用"<<endl;
}

int main(){
    func();
    func(5);
    return 0;
}