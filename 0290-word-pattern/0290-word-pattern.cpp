class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> mp1;
        unordered_map<string, char> mp2;

        vector<string> words;
        string temp;
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                words.push_back(temp);
                temp = "";
            } else {
                temp += s[i];
            }
        }
        words.push_back(temp);

        if (pattern.size() != words.size()) return false;

        for (int i = 0; i < pattern.size(); i++) {
            char c = pattern[i];
            string w = words[i];

            if (mp1.count(c) && mp1[c] != w) return false;
            if (mp2.count(w) && mp2[w] != c) return false;

            mp1[c] = w;
            mp2[w] = c;
        }

        return true;
    }
};