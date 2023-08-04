#include<stdio.h>
#define PI 3.1416
int main()
{
	float radius , area ;
	printf("Enter the radius of circle:");
	scanf("%f",&radius);
	area=2*PI*radius;
	printf("The are of circle is %f",area);
	return 0;
}
