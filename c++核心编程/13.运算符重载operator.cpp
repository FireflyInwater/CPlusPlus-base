//运算符的重载实际上是函数的重载！！！****所以对于函数的操作也适用于运算符重载。比如友元

//基本语法:函数类型 operator运算符名称（形参列表）

// 注意：只能对已有的c++运算符进行重载；运算对象必须包含类对象；

#include<iostream>

using namespace std;

class Complex{
    public:
        Complex(){real = 0;imag = 0;}
        Complex(double r,double i):real(r),imag(i){}
        Complex operator+(Complex &c2);
        void display();
    private:
        double real;
        double imag;
};

Complex Complex::operator+(Complex &c2){  //c1.operator+(c2)
    Complex tempc;
    tempc.real = this->real + c2.real;
    tempc.imag = this->imag + c2.imag;
    return tempc;
}

