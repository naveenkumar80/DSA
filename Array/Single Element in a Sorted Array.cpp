#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Singlearr(vector<int> arr){
        int len = arr.size();
        int st = 0, end = len - 1;

        if(len==1) return arr[0];
        
        while(st<=end){
            int mid = st + (end - st)/2;

            if(mid == 0 && arr[0]!=arr[1]) return arr[mid];
            if(mid == len-1 && arr[len-1]!=arr[len - 2]) return arr[mid];

            if(arr[mid+1] != arr[mid] && arr[mid -1] != arr[mid]){
                return arr[mid];
            }
            if(mid % 2 == 0){
                if(arr[mid] == arr[mid -1]){
                    end = mid -1;
                }
                if(arr[mid] == arr[mid + 1])
                {
                    st = mid + 1;
                }
            }
            else{
                if(arr[mid] == arr[mid -1])
                {
                    st = mid+1;
                }
                if(arr[mid] == arr[mid + 1])
                {
                end = mid -1;
                }
            }
            
        }
        return arr[st];
}

int main()
{
    vector <int> arr ={1,1,2,3,3,4,4,8,8};
    vector <int> arr1 ={3,3,7,7,10,11,11};
    cout<<Singlearr(arr);
    return 0;
}