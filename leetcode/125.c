#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool isPalindrome(char* s) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        if (!isalnum(s[left])) {
            left++;
            continue;
        }
        if (!isalnum(s[right])) {
            right--;
            continue;
        }

        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    char* S = "kayak";

    printf("%d", isPalindrome(S));
}

