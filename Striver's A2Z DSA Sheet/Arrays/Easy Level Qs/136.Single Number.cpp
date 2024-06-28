# https://leetcode.com/problems/single-number/description/
# TC O(n)
# SC O(1)
int singleNumber(int* nums, int numsSize) {
    int result = 0;
    
    for (int i = 0; i < numsSize; i++) {
        result ^= nums[i];
    }

    return result;
}
