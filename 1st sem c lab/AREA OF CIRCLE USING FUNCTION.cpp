#include<stdio.h>
int area_c(int r);
int main()
{
	int r, PI, area=0;
	printf("enter the value of r\n");
	scanf("%d", &r);
	area=area_c(r);
	printf("area=%d",area);
}
int area_c( int r)
{
int c,PI=3.14,area=0;
area=PI*r*r;
return(area);

}
