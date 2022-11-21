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
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
        vector<int> inorder;
        inorderTraversal(root,inorder);
        
        vector<vector<int>> ans;
        
        for(auto it:queries){
            int tmp1 = func1(inorder,it);
            int tmp2 = func2(inorder,it);
            ans.push_back({tmp1,tmp2});
        }
        return ans;
    }
private:
    void inorderTraversal(TreeNode* root,vector<int>& inorder){
        if(!root)
            return;
        inorderTraversal(root->left,inorder);
        inorder.push_back(root->val);
        inorderTraversal(root->right,inorder);        
    }
    
    int func1(vector<int>& inorder,int target){
        int left = 0;
        int right = inorder.size()-1;
        int ans = -1;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(inorder[mid]==target)
                return inorder[mid];
            else if(inorder[mid]>target)
                right = mid-1;
            else{
                ans = max(ans,inorder[mid]);
                left = mid+1;
            }
        }
        return ans;
    }
    
    int func2(vector<int>& inorder,int target){
        int left = 0;
        int right = inorder.size()-1;
        int ans = INT_MAX;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(inorder[mid]==target)
                return inorder[mid];
            else if(inorder[mid]<target)
                left = mid+1;
            else{
                ans = min(ans,inorder[mid]);
                right = mid-1;
            }
        }
        if(ans==INT_MAX)
            return -1;
        return ans;
    }
};