
/*
class ClassName{
    //访问权限public,private

    //属性

    //行为
};
*/

#include<iostream>
#include<string.h>
using namespace std;

class Student{
    public:
    string name;
    int id;

    void show_info(){
        cout<<"info"<<endl;
    }
};

int main(){
    Student stu1;
    stu1.name = 'lisi';
    stu1.id = 1;
    stu1.show_info();
    return 0;
}