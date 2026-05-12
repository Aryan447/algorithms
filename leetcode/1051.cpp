#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
   public:
    int heightChecker(vector<int>& heights) {
        int ans = 0;
        vector<int> expected = heights;
        sort(expected.begin(), expected.end());

        for (int i = 0; i < expected.size(); i++) {
            if (expected[i] != heights[i]) {
                ans++;
            }
        }

        return ans;
    }
};

int main() {
    Solution s1;

    vector<int> nums = {5, 1, 2, 3, 4};

    cout << s1.heightChecker(nums) << endl;
}
