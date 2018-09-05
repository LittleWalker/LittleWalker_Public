bool isSymmetric(TreeNode* root) {
		if (!root) return true;
		return judge(root->left, root->right);
	}
	bool judge(TreeNode* p, TreeNode* q){
		if (!p && !q) return true;
		if (!p || !q) return false;
		return (p->val == q->val) && judge(p->left, q->right) && judge(p->right, q->left);
	}