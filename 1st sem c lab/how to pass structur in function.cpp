#include<stdio.h>
struct employee
{
	char name[20];
	int age;
	double salary;
}e;
int display ( struct employee e);
int main()
{
	printf("enter the name age salary\n");
	scanf("%s %d %lf", e.name, &e.age, &e.salary);
	display(e);
	return 0;
}
int display(struct employee e)
{
	printf("Display data\n");
	printf("%s %d %lf", e.name, e.age, e.salary);
}

