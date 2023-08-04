#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *f1,*f2;
	char c;
	f1=fopen("kiran.txt","r");
	if(f1==0)
	{
		printf("invalid");
		return 1;
	}
	f2=fopen("paras.txt","w");
	if(f2==0)
	{
		printf("invalid");
		return 1;
	}
	c=fgetc(f1);
	while(c!=EOF)
	{
		fputc(c,f2);
		c=fgetc(f1);
	}
	fclose(f1);
	fclose(f2);
	return 0;
}
