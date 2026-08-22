class Solution {
public:
    bool checkDivisibility(int n) {
        int mainN = n;
        int sumN = 0;
        int productN = 1;
        while (n > 0) {
            sumN += n % 10;
            productN *= n % 10;
            n /= 10;
        }
        if (mainN % (sumN + productN) == 0) {
            return true;
        }
        return false;

        
    }
};