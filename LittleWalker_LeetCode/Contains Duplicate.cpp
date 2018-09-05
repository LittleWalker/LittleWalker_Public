bool containsDuplicate(vector<int>& nums) {
		if (nums.size()){
			for (int j = 0; j < nums.size() - 1; j++){
				for (int i = j + 1; i < nums.size(); i++){
					if (nums[j] == nums[i]){
						return true;
					}
				}
			}
		}
		return false;
	}