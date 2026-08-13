class Solution {
public:
    int missingInteger(vector<int>& nums) {

        int n = nums.size();

        int ans = nums[0];

        for (int i = 1; i < n; i++) {

            if (nums[i] == nums[i - 1] + 1) {
                ans += nums[i];
            }
            else {
                break;
            }
        }
        while (find(nums.begin(), nums.end(), ans) != nums.end()) {
            ans++;
        }

        return ans;
    }
};