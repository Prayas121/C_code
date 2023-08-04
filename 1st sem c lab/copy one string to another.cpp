#include<stdio.h>
#include<string.h>
int main()
{
	char x[10], y[10];
	puts("enter first string\n");
	gets(x);
	strcpy(y, x);
	printf("%s\n",x);
	printf("%s\n",y);
	return 0; 
}
