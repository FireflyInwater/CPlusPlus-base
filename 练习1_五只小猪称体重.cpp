#include<iostream>

using namespace std;

int main(){
    int arr[5] = {300,350,200,400,250};
    int max = 0 ; //先认定一个最大值
    for ( int i = 0; i < 5; i++)
    {
        if(arr[i]>max){
            max = arr[i];
        }
        /* code */
    }
    cout<<"max="<<max<<endl;
}