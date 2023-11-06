#include <vector>
class Solution {
public:
    vector<int> res;
    int KthNode(TreeNode* root, int k) {
        // write code here
        if(!root || k==0) return -1;
        dfs(root);
        if( k > res.size() ) return -1;
        return res[k-1];
    }
    void dfs( TreeNode * root){
        if(root == nullptr) return;
        dfs(root->left);
        res.push_back(root->val);
        dfs(root->right);
    }

};
