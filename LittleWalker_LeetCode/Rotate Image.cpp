void rotate(vector<vector<int>>& matrix) {
		int ins = 0;
		int len = matrix[0].size();
		int n = len - 1;

		for (int i = 0; i <= n - 1; i++){
			for (int j = i; j <= n; j++){
				ins = matrix[i][j];
				matrix[i][j] = matrix[j][i];
				matrix[j][i] = ins;
			}
		}
		for (int i = 0; i <= n; i++){
			for (int j = 0; j <= n / 2; j++){
				ins = matrix[i][j];
				matrix[i][j] = matrix[i][n - j];
				matrix[i][n - j] = ins;
			}
		}
	}