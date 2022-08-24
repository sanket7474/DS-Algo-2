/*

	https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

*/

#include<bits/stdc++.h>

using namespace std;
	
	int maxProfit(vector<int> prices) {
		
		int profit = 0;
		
		for(int i = 0 ; i < prices.size(); i++) {
			
			for(int j = i+1 ; j < prices.size(); j++) {
				
				if(prices[i] < prices[j]) {
					
					int diff = prices[j] - prices[i];
					
					if(profit < diff)
						profit = diff;
				}
			}
		}
		
		return profit;
	}
	
	int maxProfit2(vector<int> price) {
		
		int min_price = INT_MAX;
		int max_price = 0;
		
		
		for(int i = 0 ; i < price.size() ; i++) {
			
			if(price[i] < min_price)
				min_price = price[i];
			if(price[i] - min_price > max_price)
				max_price = price[i] - min_price;
			
		}
		
		return max_price;
	}
	int main() {
		
		vector<int> v = {7,1,5,3,6,4};
		
		cout<<maxProfit2(v);
		return 0;
	}
