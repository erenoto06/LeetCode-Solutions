class Solution {
public:
    int dfs(int num) {
        int newnum = 0;
        while (num > 0) {
            int digit = num % 10;
            newnum += digit;
            num /= 10;
        }
        return newnum;
    }
    
    int smallestIndex(vector<int>& nums) {
        for (int i = 0;i < nums.size();i++) {
            if (dfs(nums[i]) == i) {
                return i;
            }
        }
        return -1;
    }
};