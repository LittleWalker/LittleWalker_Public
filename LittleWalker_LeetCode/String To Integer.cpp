int myAtoi(string str) {
		int i = 0;
		int result = 0;
		while (str[i] == ' ') i++;

		if (str[i] == '-'){
			i++;
			while (str[i] >= '0' && str[i] <= '9'){
				if (result > INT_MAX / 10 || result == INT_MAX / 10 && str[i] > '8')
					return INT_MIN;
				result = result * 10 + (str[i] - '0');
				i++;
				if (i == str.length() || str[i] <'0' || str[i] > ' 9')
					return  -1*result;
				continue;
			}
			if (result)
				return -1*result;
			else return 0;
		}

		else if (str[i] == '+'){
			i++;
			while (str[i] >= '0' && str[i] <= '9'){
				if (result > INT_MAX / 10 || result == INT_MAX / 10 && str[i] > '7')
					return INT_MAX;
				result = result * 10 + (str[i] - '0');
				i++;
				if (i == str.length() || str[i] <'0' || str[i] > ' 9')
					return  result;
				continue;
			}
			if (result)
				return result;
			else return 0;
		}
		else if (str[i] >= '0' && str[i] <= '9'){
			while (str[i] >= '0' && str[i] <= '9'){
				if (result > INT_MAX / 10 || (result == INT_MAX / 10 && str[i] >= '7'))
					return INT_MAX;
				result = result * 10 + (str[i] - '0');
				i++;
				if (i == str.length() || str[i] <'0' || str[i] > ' 9')
					return  result;
				continue;
			}
			if (result)
				return result;
			else return 0;
		}
		else return 0;
	}