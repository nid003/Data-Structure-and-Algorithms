class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {

        int maxEnding = nums[0];
        int minEnding = nums[0];

        int maxSum = nums[0];
        int minSum = nums[0];

        int total = nums[0];

        for(int i = 1; i < nums.size(); i++) {

            int old_maxEnding = maxEnding;
            int old_minEnding = minEnding;

            maxEnding = max(old_maxEnding + nums[i], nums[i]);
            minEnding = min(old_minEnding + nums[i], nums[i]);

            maxSum = max(maxSum, maxEnding);
            minSum = min(minSum, minEnding);

            total += nums[i];
        }
        if(maxSum < 0) {
            return maxSum;
        }

        int circularSum = total - minSum;

        return max(maxSum, circularSum);
    }
};