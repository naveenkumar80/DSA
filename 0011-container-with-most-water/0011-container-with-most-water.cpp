class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int maxarea = 0;

        while(left < right){
            int width = right - left;
            int area = min(height[left], height[right]) * width;
            maxarea = max(maxarea, area);

            height[left] < height[right] ? left++ : right--;
        }

        return maxarea;
    }
};