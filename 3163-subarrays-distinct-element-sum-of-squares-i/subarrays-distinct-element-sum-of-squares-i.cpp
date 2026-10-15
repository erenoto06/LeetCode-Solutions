class Solution {
public:
    int rec(vector<int>& nums, int len) {
        int total = 0;
        int left = 0;
        for (int right = len - 1;right < nums.size();right++) {
            unordered_set<int> unique;
            for (int i = left;i <= right;i++) {
                unique.insert(nums[i]);
            }
            left++;
            int siz = unique.size();
            total += (siz * siz);
        }
        return total;
    }


    int sumCounts(vector<int>& nums) {
        int sum = nums.size();
        int len = 2;
        while (len <= nums.size()) {
            int added = rec(nums, len);
            sum += added;
            len++;
        }
        return sum;
    }
};