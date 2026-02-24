class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.size()) return s;

        vector<string> rows(numRows);
        int cur = 0, dir = -1;

        for (char c : s) {
            rows[cur] += c;
            if (cur == 0 || cur == numRows - 1) dir = -dir;
            cur += dir;
        }

        string ans;
        for (string &r : rows) ans += r;
        return ans;
    }
};