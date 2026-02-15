class Solution {
public:
    double myPow(double x, int n) {

        if (n == 0) return 1.0;
        if (x == 0) return 0.0;
        if (n == 1) return x;

        // special case for -1
        if (x == -1 && n % 2 == 0) return 1.0;
        if (x == -1 && n % 2 != 0) return -1.0;

        long long binform = n;

        // handle negative power
        if (binform < 0) {
            x = 1 / x;
            binform = -binform;
        }

        double ans = 1.0;

        // Binary Exponentiation
        while (binform > 0) {
            if (binform % 2 == 1) {
                ans *= x;
            }
            x *= x;
            binform /= 2;
        }

        return ans;
    }
};
