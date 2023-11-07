#include <functional>
class Solution {
public:
    int lowestCommonAncestor(TreeNode* root, int o1, int o2) {
        function<int (TreeNode* ,int ,int )> dfs =[&] (TreeNode* root,int o1 ,int o2){
            if(root == NULL) return -1;
            if(root->val == o1 ||root->val == o2) return root->val;
            int left = dfs(root->left,o1,o2);
            int right= dfs(root->right ,o1,o2);
            if(left > -1 && right >-1) return root->val;
            if(left >-1) return left;
            else return right;
        };
        return dfs(root,o1,o2);
        
    }
};
