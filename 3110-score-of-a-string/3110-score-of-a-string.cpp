class Solution {
public:
    int scoreOfString(string s) {
        int n=s.size();
        int score=0;
        for(int i=n-1;i>0;i--){
            score+=abs(s[i-1]-s[i]);
        }
        return score;
    }
};