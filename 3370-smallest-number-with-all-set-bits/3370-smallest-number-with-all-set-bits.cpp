class Solution {
public:
    bool setbit(int n){
        while(n>0){
            if(n%2==0){
                return false;
            }
            n/=2;
        }
        return true;
    }
    int smallestNumber(int n) {
        while(!setbit(n)){
            n++;
        }
        return n;
    }
};