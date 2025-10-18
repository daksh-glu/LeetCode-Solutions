class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        
        set<int> distinct;
        int last = INT_MIN;
        
        for (int num : nums) {
            int newVal = max(num - k, last + 1);
            if (newVal <= num + k) {
                distinct.insert(newVal);
                last = newVal;
            }
        }
        
        return distinct.size();
    }
};