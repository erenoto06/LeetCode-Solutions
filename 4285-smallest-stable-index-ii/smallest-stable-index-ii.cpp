class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> rightmins(nums.size());
        int rightmin = nums[nums.size() - 1];
        for (int i = nums.size() - 1;i >= 0;i--) {
            rightmin = min(rightmin,nums[i]);
            rightmins[i] = rightmin;
        }
        int leftmax = 0;
        for (int j = 0;j < nums.size();j++) {
            leftmax = max(leftmax, nums[j]);
            int insscore = leftmax - rightmins[j];
            if (insscore <= k) {
                return j;
            }
        }
        return -1;

        
    }
};