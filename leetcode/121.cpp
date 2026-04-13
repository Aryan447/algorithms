#include <iostream>
#include <vector>

class Solution {
   public:
    int maxProfit(std::vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;

        for (int price : prices) {
            minPrice = std::min(minPrice, price);
            maxProfit = std::max(maxProfit, price - minPrice);
        }
        return maxProfit;
    }
};

int main() {
    Solution s1;

    std::vector<int> nums = {7, 1, 5, 3, 6, 4};

    std::cout << s1.maxProfit(nums);

    std::cout << "\n";
}
