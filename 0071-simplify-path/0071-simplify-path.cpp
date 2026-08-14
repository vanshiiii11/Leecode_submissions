class Solution {
public:
    string simplifyPath(string path) {
        int n=path.size();
        stack<string>st;
        string temp="";
        for(int i=0;i<=n;i++){
            if(i==n || path[i]=='/' ){
                if(temp=="." || temp==""){
                }
                else if(temp==".."){
                    if(!st.empty())
                        st.pop();
                }
                else st.push(temp);
                temp="";
            }
            else 
                temp+=path[i];
        }
        string ans="";
        while(!st.empty()){
            ans="/"+st.top()+ans;
            st.pop();
        }
        if(ans=="")return "/";
        else return ans;
    }
};