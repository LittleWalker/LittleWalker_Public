class Solution{
public:
	int maxProfit(vector<int>& prices){
		int profit = 0;
		int temp = 0;
		int j = 0;
		if (!prices.size() == 0){
			for (int i = 0; i < prices.size() - 1; i++){
				if (prices[i] > prices[i + 1]){
					temp = prices[i] - prices[i - j];
					j = 0;
				}
				else if (i + 1 == prices.size() - 1){
					temp = prices[i + 1] - prices[i - j];
				}
				else j++;
				profit += temp;
				temp = 0;
			}
		}
		else profit = 0;
		return profit;
	}
};