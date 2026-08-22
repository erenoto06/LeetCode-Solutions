class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        char temp = ' ';
        string output = "";
        int left = 0;
        int count = 0;
        if(strs[0].empty()){
            return output;
        }
        if(strs.size()== 1){
            return strs[0];
        }
        while (left < strs[0].size()) {
            for (string word : strs) {
                if (temp == ' ') {
                    temp = word[left];
                    count++;
                }
                else {
                    if (temp != word[left]) {
                        return output;
                    }
                    count++;
                    if (count == strs.size()) {
                        output += word[left];
                        left++;
                        count = 0;
                        temp = ' ';
                    }
                }
            }
        }
        return output;
        
    }
};