/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
    let sum = 0;
    let maxSum = Number.MIN_SAFE_INTEGER;

    for (const it of nums) {
        sum += it;
        maxSum = Math.max(sum, maxSum);

        if (sum < 0) sum = 0;
    }
};
