class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<0) nums[i]*=-1;
        }
        sort(nums.begin(),nums.end());
        long Sum=0, sum1=0;
        for(int i=0;i<n/2;i++){
            Sum+=pow(nums[i],2);
        }
        for(int i=n/2;i<n;i++){
            sum1+=pow(nums[i],2);
        }
        return sum1-Sum;
    }
};