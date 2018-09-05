TreeNode* sortedArrayToBST(vector<int>& nums) {
		TreeNode* root = nullptr;
		int treeSize = nums.size();
		if (treeSize == 0) return root;
		int midnum = 0;
		if (treeSize % 2 == 0)
			midnum = treeSize / 2;
		else
			midnum = (treeSize - 1) / 2;

		root = new TreeNode(nums[midnum]);
		vector<int> leftnums;
		for (int i = 0; i < midnum; i++){
			leftnums.push_back(nums[i]);
		}
		vector<int> rightnums;
		for (int i = midnum + 1; i < nums.size(); i++){
			rightnums.push_back(nums[i]);
		}
		root->left = sortedArrayToBST(leftnums);
		root->right = sortedArrayToBST(rightnums);

		return root;
	}