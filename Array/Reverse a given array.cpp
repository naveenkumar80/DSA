#include<iostream>
using namespace std;

int reverseArray(int arr[], int size){
    int start = 0 , end = size -1 ;
    while(start<=end){
        swap(arr[start],arr[end]);
        start +=1;
        end -=1;
    }
    for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
    }
    return 0;
}

int main()
{
    int arr[] ={3,4,57,5,23,52,99,43};
    int size = sizeof(arr)/sizeof(int);
    reverseArray(arr,size);
    return 0;
}