class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n=dimensions.size();
        double ans=0;
        double prod=0;
        int area=1;
        int final;
        for(int i=0;i<n;i++){
            for(int j=0;j<2;j++){
                prod=sqrt((dimensions[i][0]*dimensions[i][0])+(dimensions[i][1]*dimensions[i][1]));
                area=dimensions[i][0]*dimensions[i][1];
            }
            // ans=max(prod, ans);
            if (prod > ans) {
                ans = prod;
                final = area;
            }
            else if (prod == ans) {
                final = max(final, area);
            }
        }
        
        return final;
    }
};