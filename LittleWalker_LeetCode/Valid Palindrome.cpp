bool isPalindrome(string s) {
		int len = s.length() - 1;
		int i = 0;
		if (s.length() == 0)
			return true;
		while (1){
			if (s[i] >= '0' && s[i] <= '9'){
				if ((s[len] >= 'a' && s[len] <= 'z' || s[len] >= '0' && s[len] <= '9'
					|| s[len] >= 'A' &&s[len] <= 'Z'))
					if (s[i] == s[len])
					{
						i++;
						len--;
						if (i >= len)
							return true;
						continue;
					}
					else return false;
				else
				{
					len--;
					if (i >= len)
						return true;
					continue;
				}
			}
			else if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' &&s[i] <= 'Z'){
				if ((s[len] >= 'a' && s[len] <= 'z' || s[len] >= '0' && s[len] <= '9'
					|| s[len] >= 'A' &&s[len] <= 'Z'))
					if (s[i] == s[len] || s[i] == (s[len] + 32) || (s[i] + 32) == s[len])
					{
						i++;
						len--;
						if (i >= len)
							return true;
						continue;
					}
					else return false;
				else
				{
					len--;
					if (i >= len)
						return true;
					continue;
				}
			}
			else{
				i++;
				if (i >= s.length()){
					return true;
				}
			}
		}
	}