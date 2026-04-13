#include <iostream>
#include <vector>

class Solution {
   public:
    void sortColors(std::vector<int>& nums) {
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;

        for (int it : nums) {
            switch (it) {
                case 0:
                    count0++;
                    break;
                case 1:
                    count1++;
                    break;
                case 2:
                    count2++;
                    break;
            }
        }

        for (int i = 0; i < count0; i++) {
            nums[i] = 0;
        }
        for (int i = count0; i < count0 + count1; i++) {
            nums[i] = 1;
        }
        for (int i = count0 + count1; i < nums.size(); i++) {
            nums[i] = 2;
        }
    }
};

int main() {
    Solution s1;

    std::vector<int> nums = {2, 0, 2, 1, 1, 0};
    s1.sortColors(nums);

    for (int it : nums) {
        std::cout << it << " ";
    }

    std::cout << "\n";
