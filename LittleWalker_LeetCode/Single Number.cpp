int singleNumber(vector<int>& nums) {
		int k = 0;
		int mark = 0;
		int i = 0;
		while (i < nums.size()){
			if (k != i){
				if (nums[k] == nums[i]){
					k++;
					i = 0;
				}
				else{
					mark = k;
					i++;
				}
			}
			else i++;
		}
		return nums[mark];
	}