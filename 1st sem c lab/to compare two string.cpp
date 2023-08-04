#include<stdio.h>
#include<string.h>
int main()
{ int l;
	char x[10], y[10];
	puts("enter string x\n");
	gets(x);
	puts("enter string y\n");
	gets(y);
	l=strcmp(x,y);
	printf("%d\n",l);
	
	return 0; 
}
