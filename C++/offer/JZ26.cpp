/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2) {
		if(!pRoot2 || !pRoot1 ) return false;
		if(func(pRoot1 ,pRoot2)) return true;
		return HasSubtree(pRoot1->left, pRoot2) || HasSubtree(pRoot1->right,pRoot2);
    }
	bool func(TreeNode* pRoot1, TreeNode* pRoot2){
		if(!pRoot2) return true;
		if(!pRoot1 || pRoot1->val != pRoot2->val) return false;
		return  func(pRoot1->left,pRoot2->left) && func(pRoot1->right ,pRoot2->right);
	}
};

