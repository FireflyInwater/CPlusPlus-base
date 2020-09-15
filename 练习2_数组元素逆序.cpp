#include<iostream>

using namespace std;

int main(){
    //1.创建数组
    int arr[] = {1,2,3,4,5,6};
    int start = 0; //起始下标
    int end = sizeof(arr)/sizeof(arr[0])-1;//终下标
    int temp = 0; //中间值暂存
    while (start<end)
    {
        //实现交换
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for (int i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++)
    {
        cout<<arr[i]<<endl;
    }
    
    
    //2.实现逆序
}