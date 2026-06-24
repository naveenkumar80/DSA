class Solution {
public:
    bool isPalindrome(int x) {
        int num = x;
        int long long reverse = 0;
        int rem = 0;
        while(num > 0){
            rem = num % 10;
            reverse = reverse*10  + rem;
            num = num/10;
        }
        if(reverse == x){
            return true;
        }
        else{
            return false;
        }
    }
};