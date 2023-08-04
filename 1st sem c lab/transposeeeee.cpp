#include<stdio.h>
int main()
{
	int a[2][2], b[2][2];
	int i,j;
	printf("enter the elements\n");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("the matrix to be transpose\n");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			b[2][2]=a[2][2];
		}
	}
	printf("the transpose matrix is\n");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
return 0;
}
