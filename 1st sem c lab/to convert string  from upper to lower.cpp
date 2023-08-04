#include<stdio.h>
#include<string.h>
int main()
{ 
	char a[10]="RAMAN";
	char b[10]="aman";
	strlwr(a);
	printf("%s\n",a);
	strupr(b);
	printf("%s\n",b);
	return 0; 
}
