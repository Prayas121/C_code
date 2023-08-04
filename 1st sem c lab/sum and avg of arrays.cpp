#include<stdio.h>
int main()
{
	int i,sum,avg;
	sum=0;
	int a[5];
	printf("enter array element\n");
	for(i=0; i<5; i++)
	{
		scanf("%d",&a[i]);
	}
	{
		printf(" summatiion is\n");
	}
	for (i=0; i<5; i++)
	{
		sum=sum+a[i];
	}
	printf("sum=%d\n", sum);
	avg=sum/5;
	printf("%d\n,avg");
	return 0;
}
