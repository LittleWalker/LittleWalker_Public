bool isValidSudoku(vector<vector<char>>& board) {
		//查行
		for (int row = 0; row < 9; row++){
			for (int comuln = 0; comuln < 9; comuln++){
				if (board[row][comuln] != '.'){
					for (int i = comuln + 1; i < 9; i++){
						if (board[row][comuln] == board[row][i]){
							return false;
						}
					}
				}
			}
		}

		//查列
		for (int comuln = 0; comuln < 9; comuln++){
			for (int row = 0; row < 9; row++){
				if (board[row][comuln] != '.'){
					for (int i = row + 1; i < 9; i++){
						if (board[row][comuln] == board[i][comuln]){
							return false;
						}
					}
				}
			}
		}

		//查宫格
		for (int x = 0; x < 7; x +=3){  //行分为三段查

			for (int y = 0; y < 7; y += 3){   //列分为三段查
				
				
				int mark_row = x;      //查每个宫格的重复项
				int mark_comuln = y;
				for (int row = x; row < x + 3; row++){
					for (int comuln = y; comuln < y + 3; comuln++){
						mark_row = x;
						mark_comuln = y;
						if (board[row][comuln] != '.'){
							while (1) {
								if (row == mark_row && mark_row < x + 3){
									mark_row++;
									if (mark_row > x + 2)
										break;
								}
								else if (comuln == mark_comuln && mark_comuln < y + 3){
									mark_comuln++;
									if (mark_comuln > y + 2){
										mark_comuln = y;
										mark_row++;
										if (mark_row > x + 2)
											break;
									}
								}
								else if (board[row][comuln] == board[mark_row][mark_comuln]){

									cout << "repetition:" << board[row][comuln] << endl;
									cout << "num 1 position:" << row << " " << comuln << endl;
									cout << "num 2 position:" << mark_row << " " << mark_comuln << endl;
									cout << "cell position:" << x << " " << y << endl;
									return false;
								}
								else{
									mark_comuln++;
									if (mark_comuln > y + 2){
										mark_comuln = y;
										mark_row++;
										if (mark_row > x + 2)
											break;
									}
								}
							}
						}
					}
				}
			}
		}
		return true;
	}