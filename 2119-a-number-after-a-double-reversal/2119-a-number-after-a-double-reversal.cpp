class Solution {
public:
    int reversenum(int n){
        int rev=0;
        while(n>0){
            int digit=n%10;
            rev=digit+rev*10;
            n/=10;
        }
        return rev;
    }
    int digitcount(int n){
        int cnt=0;
        while(n>0){
            int digit=n%10;
            cnt+=1;
            n/=10;
        }
        return cnt;
    }
    bool isSameAfterReversals(int num) {
        int rev=reversenum(num);
        if(digitcount(rev)==digitcount(num))return true;
        else return false;
    }
};