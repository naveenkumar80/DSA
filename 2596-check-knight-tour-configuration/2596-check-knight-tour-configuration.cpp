class Solution {
public:
    int n;

    bool isValid(int x, int y) {
        return x >= 0 && x < n && y >= 0 && y < n;
    }

    bool solve(vector<vector<int>>& grid, int x, int y, int step) {

        // All steps completed
        if (step == n * n - 1)
            return true;

        // 1. (x+2, y+1)
        if (isValid(x + 2, y + 1) &&
            grid[x + 2][y + 1] == step + 1 &&
            solve(grid, x + 2, y + 1, step + 1))
            return true;

        // 2. (x+2, y-1)
        if (isValid(x + 2, y - 1) &&
            grid[x + 2][y - 1] == step + 1 &&
            solve(grid, x + 2, y - 1, step + 1))
            return true;

        // 3. (x-2, y+1)
        if (isValid(x - 2, y + 1) &&
            grid[x - 2][y + 1] == step + 1 &&
            solve(grid, x - 2, y + 1, step + 1))
            return true;

        // 4. (x-2, y-1)
        if (isValid(x - 2, y - 1) &&
            grid[x - 2][y - 1] == step + 1 &&
            solve(grid, x - 2, y - 1, step + 1))
            return true;

        // 5. (x+1, y+2)
        if (isValid(x + 1, y + 2) &&
            grid[x + 1][y + 2] == step + 1 &&
            solve(grid, x + 1, y + 2, step + 1))
            return true;

        // 6. (x+1, y-2)
        if (isValid(x + 1, y - 2) &&
            grid[x + 1][y - 2] == step + 1 &&
            solve(grid, x + 1, y - 2, step + 1))
            return true;

        // 7. (x-1, y+2)
        if (isValid(x - 1, y + 2) &&
            grid[x - 1][y + 2] == step + 1 &&
            solve(grid, x - 1, y + 2, step + 1))
            return true;

        // 8. (x-1, y-2)
        if (isValid(x - 1, y - 2) &&
            grid[x - 1][y - 2] == step + 1 &&
            solve(grid, x - 1, y - 2, step + 1))
            return true;

        return false;
    }

    bool checkValidGrid(vector<vector<int>>& grid) {
        n = grid.size();

        if (grid[0][0] != 0)
            return false;

        return solve(grid, 0, 0, 0);
    }
};