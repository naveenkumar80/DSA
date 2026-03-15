#include<iostream>
using namespace std;

void minmaxswap(int arr[], int len){
    int maxIndex = 0, minIndex = 0;
    for(int i = 1; i < len; i++){
        if (arr[maxIndex] < arr[i]){
            maxIndex = i;
        }
        if(arr[minIndex] > arr[i]){
            minIndex = i;
        }
    }
    swap(arr[maxIndex], arr[minIndex]);

    for(int i = 0; i < len; i++){
        cout << arr[i] << " ";
    }

}

int main()
{
    int arr[] = {6,9,3,5,8,10,2,1,54,45,88};
    int len = sizeof(arr)/sizeof(int);
    minmaxswap(arr,len);
    return 0;
}
