class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int n = landStartTime.size(), m = waterStartTime.size();
        int ans = INT_MAX;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int finLand = landStartTime[i] + landDuration[i];
                ans = min(ans, max(finLand, waterStartTime[j]) + waterDuration[j]);
                int finWater = waterStartTime[j] + waterDuration[j];
                ans = min(ans, max(finWater, landStartTime[i]) + landDuration[i]);
            }
        }return ans;
    }
};