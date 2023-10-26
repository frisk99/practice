
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> pre;
    unordered_map<int,int> m;
    TreeNode* func(int a,int b, int x,int y){
        if(a > b) return NULL;
        auto root =  new TreeNode(pre[a]);
        int k =  m[root->val];
        root->left = func(a+1,a+1+k-1-x,x,k-1);
        root->right =func(k+1+b-y,b,k+1,y);
        return root;

    }
    TreeNode* reConstructBinaryTree(vector<int>& preorder, vector<int>& inorder) {
        pre= preorder;
        int n  = pre.size();
        for(int i=0;i<n;i++){
            m[inorder[i]]=i;
        }
        return func(0,n-1,0,n-1);
        
    }
};
