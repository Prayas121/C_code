#include<stdio.h>
int main()
{
	int x=10;
	int *p;
	p=&x;
	printf("value of x=%d\n",x);
	printf("address of x=%u\n",  &x);
	printf("value of p =%u\n",p);
	printf("the value to which p points=%d\n",&p);
	return 0;
}
