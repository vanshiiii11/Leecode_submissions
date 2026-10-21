class Solution {
public:
    bool solve(vector<vector<char>>&board, int r, int c,string word, int idx){
        if(idx==word.size())return true;
        if(r<0 || c<0 || r>=board.size() || c>=board[0].size()){
            return false;
        }
        if(board[r][c]!=word[idx])return false;
        char ch=board[r][c];
        board[r][c]='#';
        bool ans= solve(board, r, c+1,word, idx+1) || solve(board, r, c-1,word, idx+1) || solve(board,r+1, c,word, idx+1)|| solve(board,r-1,c,word,idx+1);
        board[r][c]=ch;
        return ans;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(solve(board, i, j,word, 0))return true;
            }
        }
        return false;
    }  
};