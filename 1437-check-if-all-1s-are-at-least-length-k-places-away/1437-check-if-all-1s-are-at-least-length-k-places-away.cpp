class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n =nums.size();
        vector<int>arr;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                arr.push_back(i);
            }
        }
        for(int i=1;i<arr.size();i++){
            if((arr[i]-arr[i-1])<=k)return false;
        }
        return true;
        
    }
};