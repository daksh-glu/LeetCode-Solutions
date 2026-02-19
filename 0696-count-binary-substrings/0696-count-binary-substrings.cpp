class Solution {
public:
    int countBinarySubstrings(string s) {
        int prevCount = 0, currCount = 1, result = 0;

        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i-1]) {
                currCount++;
            } else {
                result += min(prevCount, currCount);
                prevCount = currCount;
                currCount = 1;
            }
        }
        result += min(prevCount, currCount);

        return result;
    }
};