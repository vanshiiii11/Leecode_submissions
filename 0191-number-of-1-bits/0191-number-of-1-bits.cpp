class Solution {
public:
    int hammingWeight(int n) {
        string ans="";
        while(n>0){
            int div=n%2;
            ans+=div+'0';
            n/=2;
        }
        int cnt=0;
        for(int i=0;i<ans.length();i++){
            if(ans[i]=='1')cnt++;
        }
        return cnt;
    }
}; 