class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> letterCount;
        if(s.size() != t.size()){
            return false;
        }
        for (int i = 0;i < s.size();i++) {
            letterCount[s[i]]++;
            letterCount[t[i]]--;
        }
        for (auto [letter, num] : letterCount) {
            if (num != 0) {
                return false;
            }
        }
        return true;
        
    }
};