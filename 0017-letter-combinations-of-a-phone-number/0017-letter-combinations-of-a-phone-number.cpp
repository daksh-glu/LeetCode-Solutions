class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        
        vector<string> mp = {
            "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
        };
        
        vector<string> res = {""};
        
        for (char d : digits) {
            vector<string> temp;
            for (char c : mp[d - '0']) {
                for (string s : res) {
                    temp.push_back(s + c);
                }
            }
            res = temp;
        }
        
        return res;
    }
};