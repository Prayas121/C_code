#include <stdio.h>

int main() {
    char input[100];
    printf("Enter a character array: ");
    scanf("%s", input);

    int count = 0;
    char *ptr = input;
    
    while (*ptr != '0') {
        if (*ptr == 'I')
            count++;
        ptr++;
    }

    printf("The character 'I' occurs %d times.\n", count);

    return 0;
}
