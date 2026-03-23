#include<iostream>
#include <climits>
using namespace std;

int maxSubArray(int nums[],int n) {
        //int sum = 0,highest;
        int maxsum =INT_MIN;
        for(int start = 0; start < n ; start++){
            int currSum = 0;
            for(int end = start; end < n; end++){
                currSum += nums[end];
                maxsum = max(currSum,maxsum);
                
            }
        }
        
        return maxsum;
    }

int main()
{
    int n = 5;
    int nums[5] ={1,2,3,4,5};
    cout<<maxSubArray(nums,n);
    
    return 0;
}