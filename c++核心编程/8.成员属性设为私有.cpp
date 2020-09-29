#include<iostream>
#include<string.h>
using namespace std;


// 成员属性设为私有
//可以自己控制读写权限
//隐私保护
class Person{
    public:
        void setName(string name);
        void setAge(int age);
    private:
        string name;
        int age;
};

int main(){

    return 0;
}