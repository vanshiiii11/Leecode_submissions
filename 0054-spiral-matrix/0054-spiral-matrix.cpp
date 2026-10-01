class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        int cnt=0;
        int total=r*c;
        vector<int>ans;
        int startrow=0, startcol=0, endrow=r-1, endcol=c-1;
        while(cnt<total){
            for(int i=startcol;i<=endcol && cnt<total ;i++){
                ans.push_back(matrix[startrow][i]);
                cnt++;
            }
            startrow++;
            for(int i=startrow; cnt<total && i<=endrow;i++){
                ans.push_back(matrix[i][endcol]);
                cnt++;
            }
            endcol--;
            for(int i=endcol;cnt<total && i>=startcol;i--){
                ans.push_back(matrix[endrow][i]);
                cnt++;
            }
            endrow--;
            for(int i=endrow;cnt<total && i>=startrow;i--){
                ans.push_back(matrix[i][startcol]);
                cnt++;
            }
            startcol++;
        }
        return ans;
    }
};