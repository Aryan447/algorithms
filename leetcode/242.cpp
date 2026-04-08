#include <ios>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
  public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        unordered_map<char, int> countS;
        unordered_map<char, int> countT;

        for (size_t i = 0; i < s.length(); i++) {
            countS[s[i]]++;
            countT[t[i]]++;
        }

        return countS == countT;
    }
};

int main() {
    Solution s1;
    cout << boolalpha << s1.isAnagram("anagram", "nagaram") << endl;
}

