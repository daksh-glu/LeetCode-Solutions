class Solution {
public:
    int atMost(vector<int>& nums, int k) {
        if (k < 0) return 0;
        int l = 0, odds = 0, count = 0;
        for (int r = 0; r < nums.size(); r++) {
            odds += nums[r] % 2;
            while (odds > k)
                odds -= nums[l++] % 2;
            count += r - l + 1;
        }
        return count;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }
};