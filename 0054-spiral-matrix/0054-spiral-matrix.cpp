class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> ans;

        int srow = 0, scol = 0;
        int erow = m - 1, ecol = n - 1;

        while (srow <= erow && scol <= ecol) {

            // Left -> Right
            for (int i = scol; i <= ecol; i++) {
                ans.push_back(matrix[srow][i]);
            }
            srow++;

            // Top -> Bottom
            for (int i = srow; i <= erow; i++) {
                ans.push_back(matrix[i][ecol]);
            }
            ecol--;

            // Right -> Left
            if (srow <= erow) {
                for (int i = ecol; i >= scol; i--) {
                    ans.push_back(matrix[erow][i]);
                }
                erow--;
            }

            // Bottom -> Top
            if (scol <= ecol) {
                for (int i = erow; i >= srow; i--) {
                    ans.push_back(matrix[i][scol]);
                }
                scol++;
            }
        }

        return ans;
    }
};