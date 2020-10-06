#include<iostream>

using namespace std;

template <class elemtype>
class Stu{
public:
    Stu(elemtype a,elemtype b):age(a),scores(b){}
    void show();
private:
    elemtype age;
    elemtype scores;
};

template<class elemtype>
void Stu<elemtype>::show(){
    cout<<age<<endl;
    cout<<scores<<endl;
}

int main(){
    Stu<int> s1(2,3);
    s1.show();
    return 0;
}