//WAP to find the summission of 2 matrix size 2/2
#include<stdio.h>
void main() {
	int a[2][2],b[2][2],c[2][2];
	int i,j;
	
	printf("Enter the elements of Array A:\n");
	for(i=0; i<2; i++) {
		for(j=0; j<2; j++) {
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of Array B:\n");
	for(i=0; i<2; i++) {
		for(j=0; j<2; j++) {
			scanf("%d",&b[i][j]);
		}
	}
	printf("Summission\n");
	for(i=0; i<2; i++) {
		for(j=0; j<2; j++) {
			c[i][j] = a[i][j] + b[i] [j];
		}
	}
	printf("The resultant matrix\n");
	for(i=0; i<2; i++) {
		for(j=0; j<2; j++) {
			printf("%3d",c[i][j]);
		}
		printf("\n");
	}
}
