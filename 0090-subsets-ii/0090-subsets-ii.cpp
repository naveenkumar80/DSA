class Solution {
public:
    vector<vector<int>> ans;

    void solve(int i, vector<int>& nums, vector<int>& curr) {

        // Every current subset is a valid answer
        ans.push_back(curr);

        for (int j = i; j < nums.size(); j++) {

            // Skip duplicate choices
            if (j > i && nums[j] == nums[j - 1])
                continue;

            // Take nums[j]
            curr.push_back(nums[j]);

            solve(j + 1, nums, curr);

            // Backtrack
            curr.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        vector<int> curr;

        solve(0, nums, curr);

        return ans;
    }
};