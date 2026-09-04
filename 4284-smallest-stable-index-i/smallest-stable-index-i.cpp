class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int leftmax = 0;  
        int len = nums.size();
        int rightmin = nums[len - 1]; 
        for (int i = 0;i < len;i++) {
            leftmax = max(leftmax, nums[i]);
            for (int j = len - 1;j >= i;j--) {
                rightmin = min(rightmin, nums[j]);

            }
            int insScore = leftmax - rightmin;
            if (insScore <= k) {
                return i;
            }
            rightmin = nums[len - 1];
            
        }
        return -1;
        
    }
};