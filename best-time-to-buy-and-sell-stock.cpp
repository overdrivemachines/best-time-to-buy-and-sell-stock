#include <iostream>
#include <limits>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices);

int main(int argc, char const* argv[]) {
  vector<int> prices1 = {7, 1, 5, 3, 6, 4};
  vector<int> prices2 = {7, 6, 4, 3, 1};

  int profit1, profit2;

  profit1 = maxProfit(prices1);
  profit2 = maxProfit(prices2);

  cout << "Max Profit 1: " << profit1 << endl;
  cout << "Max Profit 2: " << profit2 << endl;

  return 0;
}

int maxProfit(vector<int>& prices) {
  int profit = 0;
  int maxProfit = 0;
  int minPrice = INT32_MAX;

  if (prices.size() < 2) return 0;

  // brute force
  // for (int i = 0; i < prices.size(); i++) {
  //   for (int j = i + 1; j < prices.size(); j++) {
  //     profit = prices[j] - prices[i];
  //     if (maxProfit < profit)
  //       maxProfit = profit;
  //   }
  // }

  for (int i = 0; i < prices.size(); i++) {
    if (prices[i] < minPrice) {
      minPrice = prices[i];
    } else {
      profit = prices[i] - minPrice;
      if (profit > maxProfit)
        maxProfit = profit;
    }
  }
  return maxProfit;
}
