#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,3,3,4,3,4,3};
    int len = 9;
    int freq = 0, ans = 0;
    for(int i = 0; i < len; i++){
        if (freq == 0){
            ans = arr[i];
        }
        if (ans == arr[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    cout<<ans;
    return 0;
}