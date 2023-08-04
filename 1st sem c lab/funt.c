#include<stdio.h>
void peri_lb();
int main()
{
	peri_lb();
	return 0;
}
void peri_lb()
{
	int l,b,peri;
	printf("enter the value of l and b\n");
	scanf("%d %d", &l, &b);
	peri=2*(l+b);
	printf("%d",peri);
}
