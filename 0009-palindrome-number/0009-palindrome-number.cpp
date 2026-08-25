class Solution {
public:
    bool isPalindrome(int x) {
        int original=x;
        long reversed=0;
        while(x>0){
            int last=x%10;
            reversed=reversed*10+last;
            x/=10;
        }
        if(reversed==original)return true;
        else return false;
    }
};