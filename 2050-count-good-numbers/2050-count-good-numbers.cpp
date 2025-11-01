class Solution {
public:
    long long mod = 1000000007;

    long long power(long long a, long long b) {
        long long res1 = 1;
        while (b > 0) {
            if (b & 1) res1 = (res1 * a) % mod;
            a = (a * a) % mod;
            b >>= 1;
        }
        return res1;
    }

    int countGoodNumbers(long long n) {
        long long even = (n + 1) / 2;
        long long odd = n / 2;
        long long a = power(5, even);
        long long b = power(4, odd);
        return (a * b) % mod;
    }
};