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
  int ans=0;
    void helper(TreeNode* root, int sum, unordered_map<long long, int>&ma, long long temp=0ll){
        if(root==NULL)return;
        temp+=1ll*root->val;
        ma[temp]++;
        if(ma.find(temp-sum)!=ma.end()){
            ans+=ma[temp-sum];
            if(sum==0)ans--;
        }
        helper(root->left, sum, ma, temp);
        helper(root->right, sum, ma, temp);
        
        ma[temp]--;
        if(ma[temp]==0)ma.erase(temp);
        temp-=root->val;
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(root==NULL)return 0;
        
        unordered_map<long long, int>ma;
        ma[0]++;
        helper(root, targetSum, ma);
        return ans;
    }
};