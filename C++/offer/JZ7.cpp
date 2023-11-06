#include <vector>
class Solution {
public:
    unordered_map<int ,int> mm;
    vector<int> pre;
    TreeNode* func(int a,int b ,int x ,int y){
         if(a > b ) return NULL;
         auto  root = new TreeNode(pre[a]);
         int k  =   mm[root->val];
         root->left = func(a+1,a+k-x,x,k-1);
         root->right = func(a+k-x+1,b,k+1,y);
         return root;
        
    }
    TreeNode* reConstructBinaryTree(vector<int>& preOrder, vector<int>& vinOrder) {
        // write code here
        int n = preOrder.size();
        pre = preOrder;
        for(int i=0;i< vinOrder.size();i++){
            mm[vinOrder[i]]=i;
        }
        return func(0,n-1,0,n-1);
    }
};
