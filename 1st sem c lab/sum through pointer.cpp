#include<stdio.h>
int main()
{
	int a[5], i,add,avg;
	int *p;
	printf("enter the five elements\n");
	for(i=0; i<5; i++)
	{
	scanf("&d\n",&a[i]);	
	}
	p=a;
	for(i=0; i<5; i++)
	{
		printf("%d\n",*(p+i));
		add=add+*(p+i);
	}
	printf("%d\n is the sum of elements",add);
return 0;		
}

