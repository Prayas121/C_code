#include<stdio.h>
int sum_ab();
int main()
{
	int sum;
	sum=sum_ab();
	printf("%d",sum);
	return 0;
	}
	int sum_ab()
	{
		int a,b,sum;
		printf("enter and b\n");
		scanf("%d %d", &a, &b);
		sum=a+b;
		return (sum);
	}
