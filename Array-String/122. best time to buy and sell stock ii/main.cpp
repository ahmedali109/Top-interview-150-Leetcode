#include <vector>
#include <iostream>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int profit = 0;
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] > prices[i-1]){
                profit+=(prices[i] - prices[i-1]);
            }
        }
        return profit;
    }
};

int main() {
    Solution solution;
    std::vector<int> prices = {7,1,5,3,6,4};
    int result = solution.maxProfit(prices);
    std::cout << "Max Profit: " << result << std::endl; 
    return 0;
}