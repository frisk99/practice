class Solution {
public:
    vector<int> PrintFromTopToBottom(TreeNode* root) {
		queue< TreeNode* > q;
		q.push(root);
		q.push(nullptr);
		vector<int> res;
		vector<int > level;
		while(q.size()){
			auto t=  q.front();
			q.pop();
			if(t== nullptr){
				if(level.empty()) break;
				for(auto x : level){
					res.push_back(x);
				}
				level.clear();
				q.push(nullptr);
				continue;
			}
			level.push_back(t->val);
			if(t->left) q.push(t->left);
			if(t->right) q.push(t->right);
		}
		return res;		
    }
};

