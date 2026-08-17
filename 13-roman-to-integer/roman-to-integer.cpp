class Solution {
public:
    int getRomanValue(char c) {
        switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
        }
    }

    int romanToInt(string s) {
       
        int result = 0;
        int index = 0;
        while (index < s.size()) {
            if (index + 1 < s.size()) {
                if (getRomanValue(s[index]) >= getRomanValue(s[index + 1])) {
                    result += getRomanValue(s[index]);
                    index++;
                }
                else {
                    result += (getRomanValue(s[index + 1]) - getRomanValue(s[index]));
                    index += 2;
                }
            }
            else {
                result += getRomanValue(s[index]);
                index++;
            }
        }
        return result;
        
    }
};