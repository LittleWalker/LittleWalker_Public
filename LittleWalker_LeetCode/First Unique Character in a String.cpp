 int firstUniqChar(string s) {
		int len = s.length() - 1;
		for (int i = 0; i <= len; i++){
			for (int j = 0; j <= len; j++){
				if (i == j)
					continue;
				else if (s[i] == s[j] && i != len)
					break;
				else if (s[i] == s[j] && i == len)
					return -1;
				else if (j == len)
					return i;
			}
			if (i == len )
				return i;
		}
		return -1;
	}