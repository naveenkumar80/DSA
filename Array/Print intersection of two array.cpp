#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[] ={1,3,4,6,8,23,45,56};
    int arr2[] ={2,343,5,3,2,56};
    vector <int> result;
    int n = 8, m = 6;
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m ; j++){
            if(arr1[i]==arr2[j]){
                result.push_back(arr1[i]);
            }
        }
    }
    for(int x:result){
        cout<< x <<" ";
    }

    return 0;
}