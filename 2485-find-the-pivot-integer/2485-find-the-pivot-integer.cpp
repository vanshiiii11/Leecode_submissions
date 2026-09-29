class Solution {
public:
    int pivotInteger(int n) {
        if(n==1)return 1;
        int low=1, high=n, total=(n*(n+1))/2;
        while(low<high){
            int mid=low+(high-low)/2;
            int sum=(mid*(mid+1))/2;
            int sum2= (total+mid)-(sum);
            if(sum==sum2)return mid;
            else if(sum<sum2)low=mid+1;
            else high=mid-1;
        }
        return -1;
    }
};