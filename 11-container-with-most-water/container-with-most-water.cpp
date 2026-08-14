class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;//8
        int curMaxArea = 0;
        int maxArea = 0;
        while (left < right) {
            int width = right - left;
            int h = min(height[left], height[right]);
            if (height[left] > height[right]) {
                right--;
            }
            else {
                left++;
            }
            curMaxArea = (width * h);
            maxArea = max(curMaxArea, maxArea);
        }
        return maxArea;
        
    }
};