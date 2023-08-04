#include<stdio.h>
long int fact_num(int num);
int main()
{
	int num;
	long int fact=1;
	printf("enter the num\n");
	scanf("%d", &num);
	fact=fact_num(num);
	printf("%ld", fact);
	return 0;
}
long int fact_num(int num)
{
	int i;
	long int fact=1;
	for(i=1; i<=num; i++)
	fact=fact*i;
	return(fact);
}
