class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<pair<int,int>> sorted_scores(n);
        for (int i = 0; i < n; i++)
            sorted_scores[i] = {score[i], i};
        sort(sorted_scores.begin(), sorted_scores.end(), greater<pair<int,int>>());
        vector<string> result(n);
        for (int i = 0; i < n; i++) {
            if (i == 0) result[sorted_scores[i].second] = "Gold Medal";
            else if (i == 1) result[sorted_scores[i].second] = "Silver Medal";
            else if (i == 2) result[sorted_scores[i].second] = "Bronze Medal";
            else result[sorted_scores[i].second] = to_string(i + 1);
        }
        return result;
    }
};