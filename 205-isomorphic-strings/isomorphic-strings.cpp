class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> isomorphic;
        unordered_set<char> used;


        for (int i = 0;i<s.size();i++) {

            if (isomorphic.count(s[i])) {
                if (isomorphic[s[i]] != t[i]) {
                    return false;
                }

            }
            else {
                if (used.count(t[i])) {
                    return false;
                }
                used.insert(t[i]);
                isomorphic[s[i]] = t[i];
            }
        }
        return true;
        
    }
};