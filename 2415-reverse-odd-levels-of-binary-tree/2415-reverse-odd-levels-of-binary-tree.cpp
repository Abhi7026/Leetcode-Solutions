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
     void solve(TreeNode* n1,TreeNode* n2,int l)
    {
        if(n1==NULL || n2==NULL)
            return ;
        if(l%2==1)
            swap(n1->val,n2->val);
        solve(n1->right,n2->left,l+1);
        solve(n1->left,n2->right,l+1);
        
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
        solve(root->right,root->left,1);
        return root;
    }
};