class Solution {
public:

    void solve(int index, vector<int>& candidates, int target,
               vector<int>& current, vector<vector<int>>& ans) {

        if(target == 0) {
            ans.push_back(current);
            return;
        }

        if(index == candidates.size() || target < 0) {
            return;
        }

        // Take the current element
        if(candidates[index] <= target) {
            current.push_back(candidates[index]);

            // Same element can be used again
            solve(index, candidates, target - candidates[index],
                  current, ans);

            current.pop_back();
        }

        // Don't take the current element
        solve(index + 1, candidates, target,
              current, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<vector<int>> ans;
        vector<int> current;

        solve(0, candidates, target, current, ans);

        return ans;
    }
};