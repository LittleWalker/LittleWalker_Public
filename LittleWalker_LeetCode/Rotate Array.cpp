void rotate(vector<int>& nums, int k) {
		int temp = 0;
		int i = nums.size();
		int j = 1;
		if (i){
			while (k > 0){
				i = nums.size() - 1;
				temp = nums[i];
				for (; i > 0; i--){
					nums[i] = nums[i - 1];
				}
				if (i == 0){
					nums[0] = temp;
				}
				k--;
			}
		}
	}