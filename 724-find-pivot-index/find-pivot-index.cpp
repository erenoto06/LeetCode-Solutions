class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0; //28
        int leftsum = 0;
        for (int num : nums) {
            sum += num;
        }
        for (int k = 0;k<nums.size();k++) {
            if (leftsum == (sum - nums[k] - leftsum)){
                return k;

            }
            else {
                leftsum += nums[k];
            }


        }
        return -1;
        
    }
};