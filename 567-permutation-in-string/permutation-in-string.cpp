class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) {
            return false;
        }
        vector<int> s1_letters(26,0);
        vector<int> checkingLetters(26,0);
        for (int i = 0;i < s1.size();i++) {
            s1_letters[s1[i]-'a']++;
            checkingLetters[s2[i]-'a']++;
        }
        if (s1_letters == checkingLetters) {
            return true;
        }
        for (int k = s1.size();k < s2.size();k++) {
            checkingLetters[s2[k]-'a']++;
            checkingLetters[s2[k - s1.size()]-'a']--;
            if (s1_letters == checkingLetters) {
                return true;
            }
        }
        return false;
        
    }
};