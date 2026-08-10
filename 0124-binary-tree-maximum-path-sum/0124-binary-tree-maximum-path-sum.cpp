/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxval=INT_MIN;
        maxht(root, maxval);
        return maxval;
    }
    int maxht(TreeNode* root,int& maxval){
        if(root==NULL)return 0;
        int lh=max(0,maxht(root->left,maxval));
        int rh=max(0,maxht(root->right, maxval));
        maxval=max(maxval, lh+rh+root->val);
        return max(lh,rh)+root->val;
    }
};