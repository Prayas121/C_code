#include <stdio.h>

int main() {
    int number;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 5 == 0) {
        if (number % 11 == 0) {
            printf("The number is exactly divisible by both 5 and 11.\n");
        } else {
            printf("The number is exactly divisible by 5 but not by 11.\n");
        }
    } else if (number % 11 == 0) {
        printf("The number is exactly divisible by 11 but not by 5.\n");
    } else {
        printf("The number is not exactly divisible by either 5 or 11.\n");
    }

    return 0;
}
