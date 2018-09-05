string longestCommonPrefix(vector<string>& strs) {
		string result = "";
		string ins = "";
		int k = 2;
		if (strs.size() == 0)
			return result;
		else if (strs.size() < 2)
			return strs[0];

		for (int i = 0; i < strs[0].size(); i++){
			if (strs[0][i] == strs[1][i]){
				result.push_back(strs[0][i]);
				if (strs[1].size() == i + 1)
					break;
			}
			else if (!result.size())
				return result;
			else break;
		}
		for (int i = 2; i < strs.size(); i++){
			int j = 0;
			while (strs[i][j] == result[j]){
				ins.push_back(result[j]);
				j++;
				if (j == result.size() || strs[i].size() == j)
					break;
			}
			result = ins;
			ins = "";
		}
		return result;
	}