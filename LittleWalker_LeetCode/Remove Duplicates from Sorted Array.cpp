#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
	int removeDuplicates(vector<int>& nums){
		int len = nums.size();
		int i = 0;

		while (i < len - 1){
			if (nums[i] == nums[i + 1]){
				len--;
				for (int j = i; j < len; j++){
					nums[j] = nums[j + 1];
					i = 0;
				}
			}
			else i++;
		}
		return len;
	}
	
};