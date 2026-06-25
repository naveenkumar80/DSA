class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd = 0, sumEven = 0;
        sumOdd = n*n;
        sumEven = n *(n + 1);
        while(sumEven != sumOdd){
            if(sumEven < sumOdd){
                sumOdd =sumOdd - sumEven;
            }
            else{
                sumEven = sumEven - sumOdd;
            }
        }
        return max(sumEven, sumOdd);
        
    }
};