class Solution {
public:
    int solve(string &s, int i, int sign, long long num) {
        if (i == s.size() || s[i] < '0' || s[i] > '9')
            return sign * num;

        num = num * 10 + (s[i] - '0');

        if (sign == 1 && num > INT_MAX) return INT_MAX;
        if (sign == -1 && -num < INT_MIN) return INT_MIN;

        return solve(s, i + 1, sign, num);
    }

    int myAtoi(string s) {
        int i = 0;
        while (i < s.size() && s[i] == ' ') i++;

        int sign = 1;
        if (i < s.size() && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') sign = -1;
            i++;
        }

        return solve(s, i, sign, 0);
    }
};
