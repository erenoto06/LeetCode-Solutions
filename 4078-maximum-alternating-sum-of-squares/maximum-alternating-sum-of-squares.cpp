class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }
        if (nums.size() == 1) {
            return nums[0] * nums[0];
        }


        vector<int> squares;
        for (int num : nums) {
            squares.push_back(num * num);
        }
        
        sort(squares.begin(), squares.end());
        long long sum = 0;
        for (int i = nums.size() - 1;i >= nums.size() / 2;i--) {
            sum += squares[i];
        }
        for (int j = 0;j < nums.size() / 2;j++) {
            sum -= squares[j];
        }
        return sum;
    }
};
