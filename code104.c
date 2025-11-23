/*Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
*/
#include <stdio.h>

int main() {
    int n, x, leftSum, rightSum, found = 0;

    // Input positive integer n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    // Find pivot integer x
    for (x = 1; x <= n; x++) {
        // Sum of numbers from 1 to x = x*(x+1)/2
        leftSum = (x * (x + 1)) / 2;

        // Sum of numbers from x to n = (n*(n+1)/2) - ((x-1)*x/2)
        rightSum = (n * (n + 1)) / 2 - ((x - 1) * x) / 2;

        if (leftSum == rightSum) {
            printf("Pivot integer is %d\n", x);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("No pivot integer found. Output: -1\n");

    return 0;
}
