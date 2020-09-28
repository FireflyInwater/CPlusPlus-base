#include <iostream>

using namespace std;

int main(){
    int arr[5]; //数组初始化方式一：先给类型长度，再赋值；
    int arr2[5] = {1,2,3,4,5};//数组初始化方式二：直接赋值//数组初始化方式三：不写长度直接赋值
    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 10;
    arr[4] = 10;
    cout << arr[0]<<endl;
    cout << arr[1]<<endl;
    cout << arr[2]<<endl;
    cout << arr[3]<<endl;
    cout << arr[4]<<endl;
    for(int i =0;i<5;i++){
        cout<<arr2[i]<<endl;
    }

    cout<<sizeof(arr)<<endl;
    cout<<sizeof(arr[0])<<endl;
    cout<<arr<<endl;
    //数组名字的用处：数组名即为数组的首地址，可访问数组。故可以通过数组名统计整个数组大小
    
    return 0;
}