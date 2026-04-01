class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string t = s + s;
        t.erase(0, 1);
        t.erase(t.size() - 1, 1);
        return t.find(s) != string::npos;
    }
};