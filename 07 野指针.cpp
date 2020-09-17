#include<iostream>

using namespace std;

int main(){
    //野指针:指针变量指向非法的内存空间
    int * p =(int *)0x1100;
    cout<<*p<<endl;
    return 0;
    }