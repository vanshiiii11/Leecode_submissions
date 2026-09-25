class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int>sorted;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                sorted.push_back(matrix[i][j]);
            }
        }
        sort(sorted.begin(),sorted.end());
        return sorted[k-1];
    }
};