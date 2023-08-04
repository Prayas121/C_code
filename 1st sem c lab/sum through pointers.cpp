#include<stdio.h>
int main()
{
	int a[5], i;
	float add=0;
	printf("enter the five elements\n");
	for(i=0; i<5; i++)
	{
	scanf("%d",&a[i]);	
	}
	int *p=a;
	
	for(i=0; i<5; i++)
	{
		add=add+ *p;
		p++;
	
	}
	printf("%f is the sum\n",add);
	printf("%f is the avg\n",add/5);

return 0;		
}

