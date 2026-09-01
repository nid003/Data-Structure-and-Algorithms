class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int maxi = nums[0];
        int mini = nums[0];
        int ans = nums[0];

        for (int i = 1; i < nums.size(); i++) {

            int v1 = maxi * nums[i];
            int v2 = mini * nums[i];
            int v3 = nums[i];

            int newMax = max(v1, max(v2, v3));
            int newMin = min(v1, min(v2, v3));

            maxi = newMax;
            mini = newMin;

            ans = max(ans, maxi);
        }

        return ans;
    }
};