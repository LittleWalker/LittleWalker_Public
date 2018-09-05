vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> result = {};
		for (int j = 0; j < nums.size() - 1; j++){
			for (int i = j + 1; i < nums.size(); i++){
				int ins = nums[j] + nums[i];
				if (ins == target){
					result.push_back(j);
					result.push_back(i);
					break;
				}
			}
		}
		return result;
	}