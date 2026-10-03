class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        int xdif1 = points[1][0] - points[0][0];
        int xdif2 = points[2][0] - points[1][0];
        int ydif1 = points[1][1] - points[0][1];
        int ydif2 = points[2][1] - points[1][1];

        if (xdif1 == 0 && ydif1 == 0) {
            return false;
        }
        if (xdif2 == 0 && ydif2 == 0) {
            return false;
        }
        if (xdif1 + xdif2 == 0 && ydif1 + ydif2 == 0) {
            return false;
        }
        if (ydif2 * xdif1 == xdif2 * ydif1) {
            return false;
        }
        else {
            return true;
        }
        
        
        
        //ydif2 / xdif2 = ydif1 / xdif1
    }
};