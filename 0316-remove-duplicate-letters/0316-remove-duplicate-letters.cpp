class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char, int>mpp;
        string ans="";
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        unordered_map<char, bool>visited;
        stack<char>st;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]--;
            if(visited[s[i]]==true)continue;
            while(!st.empty() && s[i]<st.top() && mpp[st.top()]>0){
                visited[st.top()]=false;
                st.pop();
            }
            visited[s[i]]=true;
            st.push(s[i]);
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};