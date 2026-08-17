class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romanValues;
        romanValues['I'] = 1;
        romanValues['V'] = 5;
        romanValues['X'] = 10;
        romanValues['L'] = 50;
        romanValues['C'] = 100;
        romanValues['D'] = 500;
        romanValues['M'] = 1000;
        int result = 0;
        int index = 0;
        while (index < s.size()) {
            if (index + 1 < s.size()) {
                if (romanValues[s[index]] >= romanValues[s[index + 1]]) {
                    result += romanValues[s[index]];
                    index++;
                }
                else {
                    result += (romanValues[s[index + 1]] - romanValues[s[index]]);
                    index += 2;
                }
            }
            else {
                result += romanValues[s[index]];
                index++;
            }
        }
        return result;
        
    }
};