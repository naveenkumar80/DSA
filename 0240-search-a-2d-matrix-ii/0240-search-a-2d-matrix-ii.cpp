class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n =matrix[0].size();
        int r = 0 , c = n - 1;
        while(r < m && c >= 0){
            int mid = matrix[r][c];
            if(target == mid){
                return true;
            }
            else if(target < mid){
                c--;
            }
            else if(target > mid){
                r++;
            }
        }
        return false;
    }
};