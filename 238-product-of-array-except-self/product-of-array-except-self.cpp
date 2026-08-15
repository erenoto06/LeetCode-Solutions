class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int> result(len);
        result[0] = 1;
        for(int i=1;i<len;i++){
            result[i] = result[i-1] * nums[i-1];

        }
        int right = 1;
        for(int j=len-1;j>=0;j--){
            result[j] = result[j] * right;
            right = right * nums[j];
        }
        return result;
        
    }
};