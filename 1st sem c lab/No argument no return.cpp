#include<stdio.h>
void sum_ab();
int main()
{
sum_ab();
return 0;
}
void sum_ab()
{
	int a, b, sum;
	printf("enter a and b\n");
	scanf("%d %d", &a, &b);
	sum=a+b;
	printf("%d",sum);
}
