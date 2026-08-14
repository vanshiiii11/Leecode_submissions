class Solution {
public:
    vector<int> prefixMax(vector<int> nums) {
        vector<int> prefix(nums.size());

        prefix[0] = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            prefix[i] = max(prefix[i - 1], nums[i]);
        }

        return prefix;
    }

    vector<int> suffixMax(vector<int> nums) {
        vector<int> suffix(nums.size());

        suffix[nums.size() - 1] = nums[nums.size() - 1];

        for (int i = nums.size() - 2; i >= 0; i--) {
            suffix[i] = max(suffix[i + 1], nums[i]);
        }

        return suffix;
    }

    int trap(vector<int>& height) {
        int total = 0;

        vector<int> prefix = prefixMax(height);
        vector<int> suffix = suffixMax(height);

        for (int i = 0; i < height.size(); i++) {
            int leftmax = prefix[i];
            int rightmax = suffix[i];

            if (height[i] < leftmax && height[i] < rightmax) {
                total += min(leftmax, rightmax) - height[i];
            }
        }

        return total;
    }
};