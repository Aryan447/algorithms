#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int left = 0;
    int right = numbersSize - 1;

    int* result = malloc(2 * sizeof(int));

    while (left < right) {
        int sum = numbers[left] + numbers[right];
        if (sum == target) {
            result[0] = left + 1;
            result[1] = right + 1;
            *returnSize = 2;
            return result;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    free(result);
    result = NULL;

    *returnSize = 0;
    return NULL;
}

int main() {
    int numbers[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;

    int* result = twoSum(numbers, 4, target, &returnSize);

    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result);
    result = NULL;
}

