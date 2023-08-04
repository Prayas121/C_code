#include<stdio.h>
int product_ab(int a, int b);
int main()
{
	int a, b, mul;
	printf("enter a and b\n");
	scanf("%d %d", &a,&b);
	mul=product_ab(a,b);
	printf("%d\n",mul);
	return 0;
	
}
int product_ab(int a, int b)
{
	if(a==1)
	return b;
	else if (b==1)
	return a;
	else
	return a+ product_ab(a, b-1);
}
