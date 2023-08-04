#include<stdio.h>
#include<string.h>
int main()
{
	char x[10], y[10];
	puts("enter string x\n");
	gets(x);
	puts("enter string y\n");
	gets(y);
	printf("%s\n %s\n", x , y);
	strcat(x , y);
	printf("%s\n",x);
	return 0; 
}
