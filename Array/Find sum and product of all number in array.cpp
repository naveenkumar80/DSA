#include<iostream>
using namespace std;

void sumAndproduct(int arr[], int len){
    int sum = 0;
    int product = 1;
    for(int i  = 0; i < len; i++){
        sum = sum + arr[i];
        product = product*arr[i];
    }
    cout<<"sum = "<<sum<<endl;
    cout<<"product = "<<product<<endl;
    
}

int main()
{
    int arr[]={2,4,5,6,7,8,3,5};
    int len = sizeof(arr)/sizeof(int);
    sumAndproduct(arr,len);
    return 0;
}