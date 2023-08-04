#include <stdio.h>



// Structure to represent a book
struct Book {
    char title[50];
    char author[50];
    float cost;
};

int main() {
    struct Book books[4];
    float totalCost = 0.0;
    printf("Enter details of %d books:\n", MAX_BOOKS);
    for (int i = 0; i < MAX_BOOKS; i++) {
        printf("Book %d:\n", i + 1);
        printf("Title: ");
        scanf("%s", books[i].title);
        printf("Author: ");
        scanf("%s", books[i].author);
        printf("Cost: ");
        scanf("%f", &books[i].cost);

        totalCost += books[i].cost;
    }

    // Display the total cost
    printf("Total cost of all books: $%.2f\n", totalCost);

    return 0;
}

