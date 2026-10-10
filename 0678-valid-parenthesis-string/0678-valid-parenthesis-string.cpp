class Solution {
public:
    bool checkValidString(string s) {
        int n=s.size();
        int i=0, j=0;
        for(int l=0;l<n;l++){
            if(s[l]=='('){
                i++,j++;
            }
            else if(s[l]==')'){
                i--,j--;
            }
            else {
                i--;
                j++;
            }
            if(j<0)return false;
            else if(i<0)i=0;
        }
        return i==0;
    }
};