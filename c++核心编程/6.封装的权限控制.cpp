//类的三种访问权限

//public 类内类外可以访问
//protected 类内可访问，类外不可，儿子可以访问父亲的保护内容
//private 类内可访问，类外不可，儿子不可访问父亲的私有内容
#include<iostream>
#include<string.h>
using namespace std;

class Person
{
private:
    /* data */
    int password;
public:
    string name;
protected:
    string car;
};

