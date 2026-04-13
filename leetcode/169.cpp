#include <iostream>
#include <vector>

class Solution {
   public:
    int majorityElement(std::vector<int>& nums) {
        int n = nums.size();
        int result = 0;

        for (int i = 0; i < 32; i++) {
            int count = 0;

            for (int num : nums) {
                if (num & (1 << i)) {
                    count++;
                }
            }

            if (count > n / 2) {
                result |= (1 << i);
            }
        }

        return result;
    }
};

int main() {
    Solution s1;

    std::vector<int> nums = {3, 2, 3};

    std::cout << s1.majorityElement(nums);

    std::cout << "\n";
}
