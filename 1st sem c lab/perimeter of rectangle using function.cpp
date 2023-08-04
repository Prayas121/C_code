#include<stdio.h>
void peri_lb();
int main()
{
	peri_lb();
}
void peri_lb()
{
	int l,b,peri;
	printf("enter the value of l and b\n");
	scanf("%d %d", &l, &b);
	peri=2*(l+b);
	printf("%d",peri);
}
