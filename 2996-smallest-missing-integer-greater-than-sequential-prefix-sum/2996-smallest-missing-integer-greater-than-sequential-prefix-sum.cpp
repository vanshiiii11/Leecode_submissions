class Solution {
public:
    int missingInteger(vector<int>& nums) {

        int n = nums.size();

        // Find sum of longest sequential prefix
        int ans = nums[0];

        for (int i = 1; i < n; i++) {

            if (nums[i] == nums[i - 1] + 1) {
                ans += nums[i];
            }
            else {
                break;
            }
        }

        // Find smallest missing integer >= ans
        while (find(nums.begin(), nums.end(), ans) != nums.end()) {
            ans++;
        }

        return ans;
    }
};