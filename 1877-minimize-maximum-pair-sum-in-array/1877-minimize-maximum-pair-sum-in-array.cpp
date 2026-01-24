class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int maxSum = 0;
        int left = 0;
        int right = nums.size() - 1;
        
        while (left < right) {
            int currentSum = nums[left] + nums[right];
            maxSum = max(maxSum, currentSum);
            left++;
            right--;
        }
        
        return maxSum;
    }
};