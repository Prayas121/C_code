#include<stdio.h>
#define PI 3.1416
int main()
{
	float radius,area;
	printf("Enter the value of radius\n");
	scanf("%f",&radius);
	area=PI*radius*radius;
	printf("\n the area of circle with radius  %f is : %f", radius);
	return 0;
}
