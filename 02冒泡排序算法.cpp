/*冒泡排序：
1.比较相邻的元素。如果第一个比第二个大，就交换两者位置；
2.对每一组相邻元素做同样的工作，执行完毕后，找到第一个最大值
3.重复以上步骤，每次比较次数-1.直到最后不需比较。
*/

/*
排序总轮数：元素个数-1
每轮对比次数 = 元素个数-排序轮数-1
*/

#include <iostream>
using namespace std;

int main(){
    int arr[]={4,2,8,0,5,7,1,3,9};
    cout<<"排序前："<<endl;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        cout<<arr[i]<<endl;
    }
    for (int i = 0; i < (sizeof(arr)/sizeof(arr[0])-1); i++)
    {
        for (int j = 0; j < ((sizeof(arr)/sizeof(arr[0])-1)-i-1) ; j++)
        {
            if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
        }
    }
      cout<<"排序后："<<endl;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        cout<<arr[i]<<endl;
    }
}