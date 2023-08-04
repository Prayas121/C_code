#include<stdio.h>
int swap_ab(int a, int b);
int main()
{
	int a, b;
	printf("enter through keyboard\n");
	scanf("%d %d",&a, &b);
	printf("the value before swapping\n");
	printf("a=%d\n b=%d\n",a ,b);
	swap_ab(a,b);
	return 0;
}
int swap_ab(int a, int b)
{
	
	int t;
	t=a;
	a=b;
	b=t;
	printf("now data  after swapping\n");
	printf("a=%d\n b=%d\n",a,b);
}
