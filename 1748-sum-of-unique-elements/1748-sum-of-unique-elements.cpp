class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            bool diffprev=(i==0 || nums[i]!=nums[i-1]);
            bool diffnext=(i==n-1 || nums[i]!=nums[i+1]);
            if(diffnext && diffprev)sum+=nums[i];
        }
        
        return sum;
    }
};