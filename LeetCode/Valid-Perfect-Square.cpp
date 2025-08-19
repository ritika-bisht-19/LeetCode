class Solution {
public:
    bool isPerfectSquare(int n) {
        if(n==1) return true;
        for (long i = 1; i*i <=n; i++) {
            if (n % i == 0) {
                if (i*i==n) return true;  

            }
        }
        return false;
    }
};