vector<int> plusOne(vector<int>& digits) {
		int len = digits.size() - 1;
		vector<int> result = {};
		bool x;
		for (int j = 0; j < digits.size(); j++){
			if (digits[j] == 9)
				x = false;
			else {
				x = true;
				break;
			}
		}
		if (x){
			if (digits[len] != 9){
				digits[len]++;
				return digits;
			}
			else{
				while (digits[len] == 9) {
					digits[len] = 0;
					len--;
				}
				digits[len] += 1;
			}
			return digits;
		}
		else{
			digits[0] = 1;
			for (int k = 1; k < digits.size(); k++){
				digits[k] = 0;
			}
			digits.push_back(0);
		}
		return digits;
	}