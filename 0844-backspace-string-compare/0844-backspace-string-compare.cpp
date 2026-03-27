class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i = s.size() - 1, j = t.size() - 1;
        int si = 0, ti = 0;
        while (i >= 0 || j >= 0) {
            while (i >= 0) {
                if (s[i] == '#') { si++; i--; }
                else if (si > 0) { si--; i--; }
                else break;
            }
            while (j >= 0) {
                if (t[j] == '#') { ti++; j--; }
                else if (ti > 0) { ti--; j--; }
                else break;
            }
            if (i >= 0 && j >= 0 && s[i] != t[j]) return false;
            if ((i >= 0) != (j >= 0)) return false;
            i--; j--;
        }
        return true;
    }
};