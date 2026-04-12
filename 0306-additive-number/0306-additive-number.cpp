class Solution {
public:
    bool isAdditiveNumber(string num) {
        int n = num.size();
        for (int i = 1; i <= n / 2; i++) {
            for (int j = i + 1; j < n; j++) {
                if (check(num.substr(0, i), num.substr(i, j - i), num.substr(j)))
                    return true;
            }
        }
        return false;
    }

private:
    string addStrings(string a, string b) {
        string res = "";
        int i = a.size() - 1, j = b.size() - 1, carry = 0;
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += a[i--] - '0';
            if (j >= 0) sum += b[j--] - '0';
            res += (char)('0' + sum % 10);
            carry = sum / 10;
        }
        reverse(res.begin(), res.end());
        return res;
    }

    bool check(string a, string b, string remaining) {
        if ((a.size() > 1 && a[0] == '0') || (b.size() > 1 && b[0] == '0'))
            return false;
        string sum = addStrings(a, b);
        if (remaining == sum) return true;
        if (remaining.substr(0, sum.size()) == sum)
            return check(b, sum, remaining.substr(sum.size()));
        return false;
    }
};