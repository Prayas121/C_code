#include<stdio.h>
int sum_ab(int a, int b);
int main()
{
	int a,b, sum;
	printf("enter a and b\n");
	scanf("%d %d", &a,&b);
	sum=sum_ab(a,b);
	printf("%d\n",sum);
return 0;
}
int sum_ab(int a, int b)
{
	int sum;
	sum=a+b;
	return (sum);
}
