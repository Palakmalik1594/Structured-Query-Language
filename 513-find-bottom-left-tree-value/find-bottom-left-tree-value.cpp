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
int maxd=-1;
int leftm;
void dfs(TreeNode* root,int depth){
    if(!root) return;
    if(depth>maxd){
        maxd=depth;
        leftm=root->val;
    }
    dfs(root->left,depth+1);
    dfs(root->right,depth+1);
}
    int findBottomLeftValue(TreeNode* root) {
        dfs(root,0);
        return leftm;
    }
};