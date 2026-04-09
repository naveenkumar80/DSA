#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int peakIndex(vector<int> arr,int length){
    int st = 0 , end = length -1;
    while(st<end){
        int mid = st + (end - st)/2;
        if (arr[mid]<arr[mid +1]){
            st = mid + 1;
        }
        else{
            end = mid;
        }
    }
    return st;

}

int main()
{
    vector <int> arr={0,3,8,9,5,2};
    int length = arr.size();
    cout<<peakIndex(arr,length);
    return 0;
}