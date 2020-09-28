#include<iostream>

using namespace std;

int main(){
    int arr[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    cout<<"二维数组的内存:"<<sizeof(arr)<<endl;
    cout<<"查看单行内存："<<sizeof(arr[0])<<endl;
    cout<<"查看单个元素："<<sizeof(arr[0][0])<<endl;
}