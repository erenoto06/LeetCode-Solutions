class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char, int> RepeatCount;
        int maxLen = 0;
        int curMaxlen = 0;
        int left = 0;
        for (int r = 0;r < s.size();r++) {
            RepeatCount[s[r]]++;
            while (RepeatCount[s[r]] > 2) {
                RepeatCount[s[left]]--;
                
                left++;

            }
            curMaxlen = r - left + 1;
            maxLen = max(curMaxlen, maxLen);
            



        }
        return maxLen;
        
    }
};