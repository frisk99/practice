class Solution {
public:
    vector<vector<int> > Print(TreeNode* root) {
		queue< TreeNode* > q;
		q.push(root);
		q.push(nullptr);
		vector<vector<int>> res;
		vector<int > level;
        bool flag = false;
		while(q.size()){
			auto t=  q.front();
			q.pop();
			if(t== nullptr){
				if(level.empty()) break;
				if(flag == false)
                res.push_back(level);
                else{
                    reverse(level.begin(),level.end());
                    res.push_back(level);
                }
                flag = !flag;
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
