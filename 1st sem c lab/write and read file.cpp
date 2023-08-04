#include<stdio.h>
int main()
{
	FILE* ptr;
	int x;
	ptr=fopen("prayas.txt","w");
	if(ptr==0)
	{
		printf("file cant be created");
	}
	else
	printf("Enter an integer\n");
	scanf("%d",&x);
	fprintf(ptr,"%d",x);
	fclose(ptr);
	ptr=fopen("prayas.txt","r");
	fscanf(ptr,"%d",&x);
	printf("%d is the integer\n",x);
	return 0;
	
}
