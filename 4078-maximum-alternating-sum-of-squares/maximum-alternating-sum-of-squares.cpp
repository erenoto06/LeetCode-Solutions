class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        
        if (nums.size() == 1) {
            return nums[0] * nums[0];
        }
        for (int& num : nums) {
            num = num * num;
        }
        sort(nums.begin(), nums.end());
        long long sum = 0;
        for (int i = nums.size() - 1;i >= nums.size() / 2;i--) {
            sum += nums[i];
        }
        for (int j = 0;j < nums.size() / 2;j++) {
            sum -= nums[j];
        }
        return sum;
    }
};