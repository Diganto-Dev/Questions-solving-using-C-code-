// Given an array nums of size n, return the majority element. The majority element is the element that appears more than n/2 times.

#include <stdio.h>

int majorityElement(int nums[], int n) {
    int candidate = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (count == 0)
            candidate = nums[i];

        if (nums[i] == candidate)
            count++;
        else
            count--;
    }

    return candidate;
}

int main() {
    int nums[] = {2, 2, 1, 1, 1, 2, 2};
    int n = sizeof(nums) / sizeof(nums[0]);

    printf("Majority Element: %d\n", majorityElement(nums, n));

    return 0;
}
