class Solution {
public:
    int sumsquare(int n){
        int sum=0;
        while(n>0){
            int last=n%10;
            sum+=(last*last);
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        while(n!=1 && n!=4){
            n=sumsquare(n);
       }
       return n==1;
    }
};