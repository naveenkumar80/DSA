class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        
        set <int> st;
        int repeated = -1, missing = -1;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(st.find(grid[i][j]) != st.end()){
                    repeated = grid[i][j];
                }
                else{
                    st.insert(grid[i][j]);
                }
            }
        }
        for (int i = 1; i <= n * n; i++) {
            if (st.find(i) == st.end()) {
                missing = i;
                break;
            }
        }
        return {repeated, missing};
    }
};