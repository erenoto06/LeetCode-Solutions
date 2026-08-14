class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> index;
        int left = 0;
        int right = numbers.size() - 1;
        int curSum;
        while (left < right && index.empty()) {
            curSum = numbers[left] + numbers[right];
            if (curSum > target) {
                right--;
            }
            else if (curSum < target) {
                left++;
            }
            else {
                index.push_back(left + 1);
                index.push_back(right + 1);
                
            }
        }
        return index; 
    }
};