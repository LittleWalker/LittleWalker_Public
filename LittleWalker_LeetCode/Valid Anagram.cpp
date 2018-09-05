bool isAnagram(string s, string t) {
		int len = s.length() - 1;
		string result;
		if (s.length() == t.length()){
			for (int i = 0; i <= len; i++){
				for (int j = 0; j <= len; j++){
					if (s[i] == t[j]){
						result.push_back(t[j]);
						t.erase(j, 1);
						break;
					}
				}
			}
			if (s == result)
				return true;
			else return false;
		}
		else return false;
	}