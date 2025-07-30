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
void ll(TreeNode *root,vector<int>&v){
    if(root==NULL) return;
    v.push_back(root->val);
    ll(root->left,v);
    ll(root->right,v);
 }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>v;
        ll(root,v);
        return v;
    }
};