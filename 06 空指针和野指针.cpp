#include<iostream>

using namespace std;

int main(){
    //空指针
    //1、空指针用于给指针变量进行初始化；
    int * p = NULL;

    //2.空指针是不可以进行访问的。空指针所指向内存为0-255的内存编号，不允许用户访问
    cout<<*p<<endl;//报错
    return 0;
    }