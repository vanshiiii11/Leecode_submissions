class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr;
        for(int i=0;i<=n;i++){
            arr.push_back(i);
        }
        int xori =0;
        for(int i=0;i<n+1;i++){
            xori=xori^arr[i];
        }
        for(int i=0;i<n;i++){
            xori=xori^nums[i];
        }
        
        
        return xori;
    }
};