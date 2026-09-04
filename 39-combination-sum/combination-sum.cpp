class Solution {
public:
    vector<vector<int>> output;
    void backtrack(vector<int>& nums, int target, int index,vector<int>& current) {
        int sum = 0;
        for (int num : current) {
            sum += num;
        }
        if (sum == target) {
            output.push_back(current);
            return;
            
        }
        if (sum > target) {
            return;
        }
        for (int i = index;i < nums.size();i++) {
            current.push_back(nums[i]);
            backtrack(nums, target, i, current);
            current.pop_back();
        }

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        backtrack(candidates, target, 0, temp);
        return output;
        
    }
};