class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        int n = intervals.size();
        int i = 0;
        int s = newInterval[0], e = newInterval[1];
        while (i < n && intervals[i][1] < s) res.push_back(intervals[i++]);
        while (i < n && intervals[i][0] <= e) {
            s = min(s, intervals[i][0]);
            e = max(e, intervals[i][1]);
            ++i;
        }
        res.push_back({s, e});
        while (i < n) res.push_back(intervals[i++]);
        return res;
    }
};
