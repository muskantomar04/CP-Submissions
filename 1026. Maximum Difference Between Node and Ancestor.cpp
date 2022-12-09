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
    
    /* NOT OPTIMIZED
    int ans = INT_MIN;
    int maxAncestorDiff(TreeNode* root) {
        if(!root)
            return 0;
        
        dfs(root, root->val);
        maxAncestorDiff(root->left);
        maxAncestorDiff(root->right);
        
        return ans;
    }
    
    void dfs(TreeNode *root, int data)
    {
        if(!root)
            return;
        
        int diff = abs((root->val)-data);
        ans = max(ans, diff);
        
        dfs(root->left, data);
        dfs(root->right, data);
    }    */
    
    
    // OPTIMIZED
    int maxAncestorDiff(TreeNode* root) {
        if(!root)
            return 0;
        
        int mini=INT_MAX, maxi=INT_MIN, ans=INT_MIN;
        dfs(root, mini, maxi, ans);
        return ans;
    }
    
    void dfs(TreeNode *root, int mini, int maxi, int &ans)
    {
        if(!root)
            return;
        
        mini = min(mini, root->val);
        maxi = max(maxi, root->val);
        // if(!root->left && !root->right)
        //     ans = max(ans, maxi-mini);
        // or
        ans = max(ans, maxi-mini);
        
        dfs(root->left, mini, maxi, ans);
        dfs(root->right, mini, maxi, ans);
    }
    
};