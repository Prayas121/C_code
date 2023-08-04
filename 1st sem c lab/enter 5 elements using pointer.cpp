#include<stdio.h>
int main()
{
	int a[5],i;
	int *p;
	printf("enter the five elements\n");
	for(i=0; i<5;i++)
	{
	scanf("%d",&a[i]);
	}
	p=a;
	printf("print elemenmt using pointer\n");
	for(i=0; i<5; i++)
	{
		printf("%d\n",*(p+i));
	}
	return 0;
}
