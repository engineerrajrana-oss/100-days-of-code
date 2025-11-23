/*Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.*/
#include <stdio.h>

int main() {
    int n, i, j, count, majority = -1;

    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Validate size
    if (n <= 0) {
        printf("Invalid array size.\n");
        return 0;
    }

    int nums[n];

    // Input array elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Find majority element (appears more than n/2 times)
    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (nums[j] == nums[i])
                count++;
        }

        if (count > n / 2) {
            majority = nums[i];
            break; // first such element found
        }
    }

    // Output result
    if (majority == -1)
        printf("No majority element found. Output: -1\n");
    else
        printf("Majority element is %d\n", majority);

    return 0;
}
