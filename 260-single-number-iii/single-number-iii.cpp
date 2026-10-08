class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_set<int> uniques;
        vector<int> uniqueVector;
        for (int num : nums) {
            if (!uniques.contains(num)) {
                uniques.insert(num);
            }
            else {
                uniques.erase(num);
            }
        }
        for (int x : uniques) {
            uniqueVector.push_back(x);
        }
        return uniqueVector;
    }
};