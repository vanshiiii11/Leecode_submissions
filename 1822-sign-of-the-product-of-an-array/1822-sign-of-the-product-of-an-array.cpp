class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n=nums.size();
        int neg=0, pos=0, zer=0;
        for(int i=0;i<n;i++){
            if(nums[i]<0)neg++;
            else if(nums[i]>0)pos++;
            else zer++;
        }
        if(zer>0)return 0;
        else if(neg%2==0)return 1;
        else if(neg%2!=0)return -1;
        return -1;
    }
};