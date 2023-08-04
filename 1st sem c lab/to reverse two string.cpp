#include<stdio.h>
#include<string.h>
int main()
{ 
	char a[10], b[10];
	puts("enter a\n");
	gets(a);
	puts("enter b\n");
	gets(b);
	strcpy(b,a);
	strrev(b);
	printf("%s\n",b);
	return 0; 
}
