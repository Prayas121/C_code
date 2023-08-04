#include<stdio.h>
int main()
{
	int i,min,max,n;
	int x[5];
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
}
	min=max=0;
	for(i=0;i<n;i++)
	{
		
		if(min>x[i])
		min=x[i];
		if(max<x[i])
		max=x[i];
	}
	printf("%d is maximun\n",max);
	printf("%d is minimum\n",min);
	return 0;
}
