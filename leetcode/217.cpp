#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
  public:
    bool containsDuplicate(vector<int> &nums) {
        unordered_map<int, int> visited;

        for (size_t i = 0; i < nums.size(); i++) {
            if (visited.find(nums[i]) != visited.end()) {
                return true;
            }
            visited[nums[i]]++;
        }

        return false;
    }
};

int main() {
    Solution s1;

    vector<int> nums = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};

    cout << s1.containsDuplicate(nums) << endl;
}

