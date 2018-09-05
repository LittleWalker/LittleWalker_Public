void moveZeroes(vector<int>& nums) {
		int i = 0;
		int temp = 0;
		int len = nums.size() - 1;
		if (nums.size()){
			temp = nums[0];
			nums[0] = 0;
			for (int j = 0; j < nums.size(); j++){
				if (nums[j] != 0){
					nums[i] = nums[j];
					nums[j] = 0;
					i++;
				}
			}
			if (temp){
				for (int k = nums.size() - 1; k > 0; k--){
					nums[k] = nums[k - 1];
				}
				nums[0] = temp;
			}
		}
	}