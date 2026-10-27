class Solution {
public:
    string removeStars(string s) {
        int n=s.size();
        string ans="";
        stack<char>st;
        int i=0;
        while(n>0){
            if(s[i]!='*'){
                st.push(s[i]);
            }
            else st.pop();
            i++;
            n--;
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};