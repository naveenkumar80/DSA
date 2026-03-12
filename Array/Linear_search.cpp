#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){

    for (int i = 0 ; i < size; i++){
        if (arr[i] == target){
            return i;
        }
    }
    return -1;

}

int main()
{
    int arr[] = {22,44,56,34,63,99,78,8,4,6};
    int size = sizeof(arr)/sizeof(int);
    int target = 8;
    
    cout<<linearSearch(arr,size,target);
}