//WAP in c to transpose matrix of 3/2
#include<stdio.h>
int main()
 {
	int a[3][2],b[2][3];
	int i,j;
	
	printf("Enter the elements of A:\n");
	for(i=0; i<3; i++) {
		for(j=0; j<2; j++) {
				scanf("%d",&a[i][j]);
		}		
	}
	printf("The Matrix of A\n");
	for(i=0; i<3; i++) {
		for(j=0; j<2; j++) {
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<3; i++) {
		for(j=0; j<2; j++) {
			b[j][i]=a[i][j];
		}
	}
	printf("No Transpose of A\n");
	for(i=0; i<2; i++) {
		for(j=0; j<3; j++) {
			printf("%3d",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
