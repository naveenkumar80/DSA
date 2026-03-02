#include<iostream>
using namespace std;

int main()
{
    int arr[] = {8, 10, 5, 7, 9, 3};
    int min = arr[0];
    int len = sizeof(arr)/sizeof(arr[0]);
    for (int i= 1 ; i < len ; i++){
        if (min > arr[i]){
            min = arr[i];
        }
    }
    cout<<min;
    return 0;
}