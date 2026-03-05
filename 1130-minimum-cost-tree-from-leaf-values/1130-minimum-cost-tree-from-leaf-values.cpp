class Solution {
public:
    int mctFromLeafValues(vector<int>& arr) {
        int res = 0;
        while (arr.size() > 1) {
            int idx = min_element(arr.begin(), arr.end()) - arr.begin();
            if (idx == 0)
                res += arr[0] * arr[1];
            else if (idx == arr.size() - 1)
                res += arr[idx] * arr[idx-1];
            else
                res += arr[idx] * min(arr[idx-1], arr[idx+1]);
            arr.erase(arr.begin() + idx);
        }
        return res;
    }
};