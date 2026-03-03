#include<iostream>
using namespace std;

int main()
{
    int arr[] =  {1, 2, 4, 7, 7, 5};
    int len = sizeof(arr)/sizeof(arr[0]);
    int sec_max, sec_min, max, min;

    if(len > 2){
        max = arr[0];
        min = arr[0];
        for(int i = 1 ; i < len; i++){
            if (max < arr[i]  ){
                sec_max = max ;
                max = arr[i];                
            }
            else if (arr[i] > sec_max && arr[i] != max) {
            sec_max = arr[i];
        }
        }
        for(int i = 1 ; i < len; i++){
            if (min > arr[i]  ){
                sec_min = min ;
                min = arr[i];                
            }
            else if (arr[i] < sec_min && arr[i] != min) {
            sec_min = arr[i];
            }    
        }
        cout<<"sec min = "<<sec_min<<endl;
        cout<<"min = "<<min<<endl;
        cout<<"sec max = "<<sec_max<<endl;
        cout<<"max = "<<max<<endl;        
    }
    else{
        cout<<"1"<<"-1";
    }
    
    return 0;
}