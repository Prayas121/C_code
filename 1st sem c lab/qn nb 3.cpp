#include <stdio.h>

int main() {
    int N,i,value,number;
    printf("Enter the number of values: ");
    scanf("%d", &N);

    
    FILE* numberFile = fopen("NUMBER.TXT", "w");
    if (numberFile == NULL) {
        printf("Failed to create the file.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", N);
    for ( i = 0; i < N; i++) {
        
        scanf("%d", &value);
        fprintf(numberFile, "%d\n", value);
    }

    fclose(numberFile);

    // Open NUMBER.TXT for reading
    numberFile = fopen("NUMBER.TXT", "r");
    if (numberFile == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    // Create EVEN.TXT and ODD.TXT for writing
    FILE* evenFile = fopen("EVEN.TXT", "w");
    FILE* oddFile = fopen("ODD.TXT", "w");
    if (evenFile == NULL || oddFile == NULL) {
        printf("Failed to create the files.\n");
        return 1;
    }

    
    while (fscanf(numberFile, "%d", &number) != EOF) {
        if (number % 2 == 0) {
            fprintf(evenFile, "%d\n", number);
        } else {
            fprintf(oddFile, "%d\n", number);
        }
    }

    fclose(numberFile);
    fclose(evenFile);
    fclose(oddFile);

    printf("Even and odd numbers have been separated into EVEN.TXT and ODD.TXT.\n");

    return 0;
}

