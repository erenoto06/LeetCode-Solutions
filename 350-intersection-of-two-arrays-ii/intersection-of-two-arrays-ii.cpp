class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> inter;
        unordered_map<int, int> hashmap;
        for (int i = 0;i < nums1.size();i++) {
            hashmap[nums1[i]]++;
        }
        for (int i = 0;i < nums2.size();i++) {
            if (hashmap.count(nums2[i]) && hashmap[nums2[i]] > 0) {
                inter.push_back(nums2[i]);
                hashmap[nums2[i]]--;
            }
        }

        return inter;
        
    }
};