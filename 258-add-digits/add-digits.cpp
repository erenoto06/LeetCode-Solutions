
class Solution {
public:
    int dfs(int num) {
        int newnum = 0;

        if (num < 10) {
            return num;
        }
        else {
            while (num > 0) {
                int digit = num % 10;
                newnum += digit;
                num /= 10;
            }
            return dfs(newnum);
        }
    }
    int addDigits(int num) {
        return dfs(num);
    }
};