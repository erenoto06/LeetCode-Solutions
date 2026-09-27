class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> smaller(nums.size());
        for (int i = 0;i < nums.size();i++) {
            int smallcounter = 0;
            for (int j = 0;j < nums.size();j++) {
                if (nums[j] < nums[i]) {
                    smallcounter++;
                }
            }
            smaller[i] = smallcounter;
        }
        return smaller;
    }
};