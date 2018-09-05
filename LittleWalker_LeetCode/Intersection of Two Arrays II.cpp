vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
		vector<int>  result = {};
		for (int j = 0; j < nums1.size(); j++){
			for (int i = 0; i < nums2.size(); i++){
				if (nums1[j] == nums2[i]){
					result.push_back(nums1[j]);
					nums2.erase(nums2.begin() + i);
					break;
				}
			}
		}
		return result;
	}