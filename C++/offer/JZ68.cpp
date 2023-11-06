class Solution {
public:
    int lowestCommonAncestor(TreeNode* root, int p, int q) {
        if(!root) return -1;
        if(root->val == p || root->val == q) return root->val;
        int left = lowestCommonAncestor(root->left, p, q);
        int right = lowestCommonAncestor(root->right,p, q);
        if(left >-1 && right >-1) return root->val;
        if(left >-1) return left;
        else return right;
    }
};
