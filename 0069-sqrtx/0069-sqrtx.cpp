class Solution {
public:
    int mySqrt(int n) {
        if (n == 0 || n == 1) return n;
        int low = 1, high = n, ans = 0;
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long val = mid * mid;
            if (val == n) return mid;
            if (val < n) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
};