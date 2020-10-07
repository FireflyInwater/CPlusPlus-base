//声明类继承的方式: class 派生类名: [继承方式] 基类名
//                                       {派生类新增内容}；

/*
1、公用继承public：采用公用继承，基类的public成员和函数依旧保持其属性，
                            而基类的private成员在派生类中并未成为派生类的私有成员，其只能被基类成员函数访问。
2、私有继承private：基类的public和protected成员在派生类中的访问属性相当于派生类的私有成员。
                            基类的私有成员在派生类中不可见，只能通过基类的成员函数访问。
3、保护继承protected:基类的公用成员和保护成员都成为了派生类的保护成员，
                            而基类的private成员在派生类中并未成为派生类的私有成员，其只能被基类成员函数访问。
*/

/*
派生类的构造函数与析构函数

构造函数：

派生类构造函数名（总参数表）：基类构造函数名（基类的参数表），子对象名（参数列表）
{
派生类新增的参数初始化语句；
}

*/

//注意：派生类先调用基类构造函数；再执行派生类本身的构造函数
//派生类对象释放时，先执行派生类析构函数，再执行其基类析构函数//即**先构造后析构**；

#include<iostream>
using namespace std;
    
class Student{
    public:
        void display();
    protected:
        int num;
};

void Student::display(){
    cout<<num<<endl;
}

class Student1:protected Student{
    public:
        void display1();
    private:
        int age;
};


void Student1::display1(){
    num = 1;
    age = 2;
    display();
    cout<< num<<endl;
    cout<<age<<endl; 
}

int main(){
    Student1 stu1;
    stu1.display();//错误。保护继承后基 类都成为保护对象，类外不能直接访问。
    stu1.display1();
    return 0;   
}