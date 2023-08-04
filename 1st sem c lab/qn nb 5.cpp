#include <stdio.h>

int main() {
    int n, sum = 0, num = 1;

    // Prompt the user to enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Compute and print the sum of squares
    while (num <= n) {
        sum += num * num;
        num++;
    }

    printf("The sum of squares from 1 to %d is %d\n", n, sum);

    return 0;
}


