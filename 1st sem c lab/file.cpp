#include<stdio.h>
int main()
{
	FILE*p;
	p= fopen("Raman.txt","w");
	if(p==0)
	{
		printf("file can't be open\n");
	}
	else
	fprintf(p, "prayas is my name\n");
	fclose(p);
}
