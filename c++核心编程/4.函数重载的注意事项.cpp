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


// 1、引用作为重载的条件
void func(int &a){
    cout<<"func(int &a) 调用"<<endl;
}

void func(const int &a ){
    cout<<"func (const int &a) 调用"<<endl;
}


//2、函数重载碰到默认参数:出现二义性.比如func2（10）.
void func2(int a ,int b=10 ){
    cout<<"func2(int a,int b =10) 调用"<<endl;
}


void func2(int a  ){
    cout<<"func2(int a) 调用"<<endl;
}


int main(){
    int a = 10;
    func(a);
    return 0;
}