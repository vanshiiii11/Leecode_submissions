class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum==0)cnt++;
        }
        return cnt;
    }
};