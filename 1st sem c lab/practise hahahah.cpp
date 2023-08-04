#include<stdio.h>
int area_lb(int l,int b);
int main()
{
	int l,b , area=0;
	printf("enter the value of l and b\n");
	scanf("%d %d", &l ,&b);
	area=area_lb(l,b);
	printf("the area of rect is %d\n",area);
	
}
int area_lb(int l, int b)
{
	int l,b,area=0;
	area=l+b;
	return(area);
}
