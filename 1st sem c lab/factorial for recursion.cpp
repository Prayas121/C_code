#include<stdio.h>
long  int fact_num(int num);
int main()
{
	int num;
	long int fact=1;
	printf("enter the num\n");
	scanf("%d", &num);
	fact= fact_num(num);
	printf("%ld",fact);
	return 0;
}
long  int fact_num(int num)
{
	if(num==0 || num==1)
	return 1;
	else
	return num*fact_num(num-1);
}
