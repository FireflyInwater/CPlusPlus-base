// 构造函数来处理对象的初始化
//不需要拥护调用，建立对象时自动执行
// 构造函数：没有类型、不返回值；功能是由用户定义的；
//初始化的三种方式：1、类内构造函数内直接初始化
//2、类外构造函数初始化
//3、带参数的构造函数
//4、参数初始化表:
#include<iostream>
using namespace std;

class Time{
    public:
        Time(){//构造函数;类内初始化
            hour = 0;
        }
        void showtime();
    
    private:
        int hour;
};

class Time2{
    public:
        Time2();//构造函数;类外初始化
        void showtime();
    
    private:
        int hour;
};

class Time3{
    public:
        Time3(int);//带参数的构造函数
        void showtime();
    
    private:
        int hour;
};

class Time4{
    public:
        Time4(int);//利用参数初始化表对数据成员初始化
        void showtime();
    
    private:
        int hour;
};

Time4::Time4(int h):hour(h){} //利用参数初始化表对数据成员初始化

void Time4::showtime(){
    cout<<hour<<endl;
}

Time3::Time3(int a){
    hour = a;
}
void Time3::showtime(){
    cout<<hour<<endl;
}

Time2::Time2(){//构造函数;类外初始化
    hour = 2;
}

void Time2::showtime(){
    cout<<hour<<endl;
}
void Time::showtime(){
    cout<<hour<<endl;
}

int main(){
    Time t1;
    t1.showtime();
    Time2 t2;
    t2.showtime();
    Time3 t3(3);
    t3.showtime();
    Time4 t4(4);
    t4.showtime();
    return 0;
}