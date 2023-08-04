//WAP to find the matrix  of size 2/3
#include<stdio.h>
void main() {
	int a[2][3];
	int i,j;
	printf("Enter the elements of Array A:\n");
	for(i=0; i<2; i++) {
		for(j=0; j<3; j++) {
			scanf("%d",&a[i][j]);
		}
	}
	printf("The resultant matrix\n");
	for(i=0; i<2; i++) {
			for(j=0;j<3;j++){
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
}
