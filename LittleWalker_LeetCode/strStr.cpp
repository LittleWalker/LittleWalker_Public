int strStr(string haystack, string needle) {

		if (needle.size() == 0)
			return 0;
		else if (haystack.size() < needle.size())
			return -1;

		int j = 0;
		int mark = 0;
		for (int i = 0; i < haystack.size(); i++){
			mark = i;
			while (haystack[i] == needle[j]){
				j++;
				i++;

				if (i == haystack.size() && needle[j] != '\0')
					return -1;
				else if (j == needle.size())
					return mark;

				else if (haystack[i] != needle[j]){
					j = 0;
					i = mark;
					break;
				}
			}
		}
		return -1;
	}