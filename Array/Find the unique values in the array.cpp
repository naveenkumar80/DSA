#include<iostream>
using namespace std;

void uniquevalue(int arr[], int len){
    int index = 0;

    for(int first = 0; first < len; first++){
        int count = 0;

        for(int second = 0; second < len; second++){
            if(arr[first] == arr[second]){
                count++;
            }
        }

        if(count == 1){
            arr[index] = arr[first];
            index++;
        }
    }

    while(index < len){
        arr[index] = -1;
        index++;
    }
}

int main()
{
    int arr[] ={1,3,4,4,2,2,3,1,5,6,7};
    // output: 5 6 -1 -1 -1 -1 -1 -1 -1 -1
    int len = sizeof(arr)/sizeof(int);
    uniquevalue(arr,len);

    for(int i = 0; i < len; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
