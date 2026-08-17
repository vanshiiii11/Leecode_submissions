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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root==NULL)return res;
        queue<TreeNode*>nodesQueue;
        nodesQueue.push(root);
        bool lefttoright=true;
        while(!nodesQueue.empty()){
            int n=nodesQueue.size();
            vector<int>row(n);
            for(int i=0;i<n;i++){
                TreeNode* node=nodesQueue.front();
                nodesQueue.pop();
                int idx=(lefttoright)?i:(n-1-i);
                row[idx]=node->val;
                if(node->left){
                    nodesQueue.push(node->left);
                }
                if(node->right){
                    nodesQueue.push(node->right);
                }
            }
            lefttoright=!lefttoright;
            res.push_back(row);
        }
        return res;
    }
};