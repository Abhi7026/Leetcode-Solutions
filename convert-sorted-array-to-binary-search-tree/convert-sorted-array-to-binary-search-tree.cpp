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
    /*TreeNode* solve(vector<int>&v,int l,int r)
    {
        if(l>r)
            return NULL;
        int m=l+(r-l)/2;
        TreeNode* node=new TreeNode(v[m]);
        node->left=solve(v,l,m-1);
        node->right=solve(v,m+1,r);
        
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        if(!n)
            return NULL;
        return solve(nums,0,n-1);
    }*/
     TreeNode* sortedArrayToBST(vector<int> &nums,int start,int end){
        if(start>end)
            return NULL;
        
        int mid= start +(end-start)/2;
        TreeNode* temp=new TreeNode(nums[mid]);
        temp->left=sortedArrayToBST(nums,start,mid-1);
        temp->right=sortedArrayToBST(nums,mid+1,end);
        return temp;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedArrayToBST(nums,0,nums.size()-1);
    }
};