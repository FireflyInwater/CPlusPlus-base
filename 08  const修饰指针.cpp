#include<iostream>

using namespace std;

int main(){
    //1.const修饰指针
    //常量指针 ：const 类型 *p ；
    //特点：可以改指向，不能改指向的值。
    int a = 10;
    int b =30;
    const int *p = &a;
    cout<<*p<<endl;
    p = &b;//可以改指向，
    cout<<*p<<endl;
    //*p = 20;//不能改指向的值
    //报错。常量指针不能修改指向的值。

    //const修饰常量
    //指针常量：类型 * const p
    //特点：不可改指向，可改指向的值

    //const修饰指针和常量
    //const int * const p 
    //都不可改
    return 0;
    }