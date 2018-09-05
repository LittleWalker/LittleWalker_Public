string countAndSay(int n) {
		char counts = '1';
		string result = "1";
		string ins = "";
		int mark = 0;
		int i = 0;
		while (n - 1){
			for (int i = 0; i < result.size(); i++){
				if (result[i] == result[i + 1]){
					counts++;
					mark++;
				}
				else if ((i + 1) == result.size()){
					ins.push_back(counts);
					ins.push_back(result[mark]);
					break;
				}
				else{
					ins.push_back(counts);
					ins.push_back(result[mark]);
					counts = '1';
					mark ++;
				}
			}
			counts = '1';
			mark = 0;
			result = ins;
			ins = "";
			n--;
		}
		return result;
	}