class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) return false;

        int n = s.size();
        for (int i = 0; i < n; i++) {
            // rotate once: move first char to the end
            char first = s[0];
            s.erase(s.begin());
            s.push_back(first);

            if (s == goal) return true;
        }
        return false;
    }
};
