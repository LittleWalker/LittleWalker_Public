bool isValidBST(TreeNode* root) {
		vector<int> array;
		if (root == nullptr) return true;
		inOrder(root, array);//ÖÐÐò±éÀú

		for (int i = 0; i < array.size() - 1; i++){
			if (array[i] >= array[i + 1]) return false;

		}
		return true;
	}
	void inOrder(TreeNode* root, vector<int> &array){
		if (root == nullptr) return;
		inOrder(root->left, array);
		array.push_back(root->val);
		inOrder(root->right, array);

	}