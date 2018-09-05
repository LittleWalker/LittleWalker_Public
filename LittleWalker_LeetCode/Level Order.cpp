vector<vector<int>> levelOrder(TreeNode* root) {
		vector<vector<int>> ins;
		queue<TreeNode* >  que;//用队列来实现树的广度优先搜索
		if (root == nullptr) return ins;

		que.push(root);
		while (!que.empty()){
			int root_size = que.size();
			vector<int> ins_temp;
			while (root_size--){
				TreeNode* p = que.front();
				ins_temp.push_back(p->val);
				que.pop();

				if (p->left) que.push(p->left);
				if (p->right) que.push(p->right);
			}
			ins.push_back(ins_temp);
		}
		return ins;
	}