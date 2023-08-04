#include<stdio.h>
#define MAX_BOOKS 4
struct booklist{
	char MT[50];
	float cost;
	char name[20];
}b;
int main()
{
struct booklist b[MAX_BOOKS];
	int i, j ;
	float pcost=0;
for(i=0; i<4; i++)
{
	printf("enter the mt ,cost and name\n");
	scanf("%s %f %s", b[i].MT, &b[i].cost, b[i].name);
}
 pcost+=b[i].cost;
 printf("total cost of all book: %2f\n", pcost);
 return 0;
}
