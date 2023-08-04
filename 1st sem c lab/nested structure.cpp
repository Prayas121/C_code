//Fruit details struct

#include<stdio.h>
struct fruit{
	char name[50];
	char color[50];
	float wt;
	struct DOM{
		int date;
		int month;
		int year;
	}d;
}f;

int main() 
{
	
	printf("Enter Fruit:\n");
	scanf("%s",f.name);
	printf("Enter Color:\n");
	scanf("%s",f.color);
	printf("Enter Weight:\n");
	scanf("%f",&f.wt);
	printf("Enter Date:\n");
	scanf("%d",&f.d.date);
	printf("Enter Month:\n");
	scanf("%d",&f.d.month);
	printf("Enter Year:\n");
	scanf("%d",&f.d.year);
	
	printf("%s\n%s\n%f\n%d\n%d\n%d\n",f.name,f.color,f.wt,f.d.date,f.d.month,f.d.year);
	
}
