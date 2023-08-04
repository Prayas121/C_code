#include<stdio.h>
void sum_ab(int a, int b);
int main()
{
	int a, b;
	printf("enter a and b\n");
	scanf("%d %d", &a, &b);
	sum_ab(a,b);
	return 0;
}
void sum_ab(int a,int b)
{
	int sum;
	sum=a+b;
	printf("%d", sum);
	
}
