class Solution {
public:
    string addItem(int i) {
        if (i % 3 == 0 && i % 5 == 0) {
            return "FizzBuzz";
        }
        else if (i % 3 == 0) {
            return "Fizz";
        }
        else if (i % 5 == 0) {
            return "Buzz";
        }
        else {
            string strnum = to_string(i);
            return strnum;
        }
    }
    
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        for (int j = 1;j <= n;j++) {
            result.push_back(addItem(j));
        }
        return result;
    }
};