//WAP in c to transpose of matriz size 3/2
#include <stdio.h>
int main() {
	int i,j;
  int a[10][10], transpose[10][10], r, c;
  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);

  // asssigning elements to the matrix
  printf("\nEnter matrix elements:\n");
  for (i = 0; i < r; ++i)
  for (j = 0; j < c; ++j) {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }

  // printing the matrix a[][]
  printf("\nEntered matrix: \n");
  for (i = 0; i < r; ++i)
  for (j = 0; j < c; ++j) {
    printf("%d  ", a[i][j]);
    printf("\n");
  }

  // computing the transpose
  for (i = 0; i < r; ++i)
  for (j = 0; j < c; ++j) {
    transpose[j][i] = a[i][j];
  }

  // printing the transpose
  printf("\nTranspose of the matrix:\n");
  for (i = 0; i < c; ++i)
  for (j = 0; j < r; ++j) {
    printf("%d  ", transpose[i][j]);
    printf("\n");
  }
  return 0;
}
