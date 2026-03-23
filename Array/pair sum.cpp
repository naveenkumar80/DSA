#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector <int> pairSum(vector <int> nums, int len,int target){
    vector<int> result;
    int start = 0, end = len -1;
    while(start < end){
        int sum = nums[start] + nums[end];
        if(sum == target){
            result.push_back(nums[start]);
            result.push_back(nums[end]);
            return result;
        }
        else if(sum > target){
            end--;
        }
        else{
            start++;
        }
    }
    return result;
}

int main()
{
    vector <int> nums = {2,3,4,5,67,77,87,99};
    int len = 8;
    int target = 70;
     vector<int> ans = pairSum(nums, len, target);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}
