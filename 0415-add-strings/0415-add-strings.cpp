class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size() - 1;
        int j = num2.size() - 1;
        int carry = 0;
        string res = "";

        while (i >= 0 || j >= 0 || carry) {

            int a = 0, b = 0;

            if (i >= 0) a = num1[i] - '0';
            if (j >= 0) b = num2[j] - '0';

            int sum = a + b + carry;
            carry = sum / 10;
            res += (sum % 10 + '0');

            i--;
            j--;
        }

        reverse(res.begin(), res.end());
        return res;
    }
};