class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n = nums.size();
        int count = n/2;
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
            if(mp[nums[i]] > count ){
                return nums[i];
            }
        }return 0;
    }
};