#include<iostream>
using namespace std;

int main()
{
    int arr[] = {3,4,5,6,7,8,9,12,14,16};
    int target = 12;
    int length = 10;
    int start = 0 , end = length - 1;

    while(start <= end){
        int mid =start + (end - start)/ 2 ;
        if (target > arr[mid]){
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else if(target == arr[mid]){
            cout<< mid;
            return 0;
        }
    }
    
    return 0;
}