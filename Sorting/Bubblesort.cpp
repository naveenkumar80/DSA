#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> arr, int len){
    for(int i = 0 ; i < len -1; i++){
        for(int j = 0 ; j < len - i -1; j++){
            if(arr[j] > arr[j+1] ){
                swap(arr[j],arr[j + 1]);
            }
        }
    }
    for(int i = 0; i < len -1 ; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    vector<int> arr = {2,3,5,16,10,4};
    int len = 6;
    bubbleSort(arr,len);
    return 0;
}