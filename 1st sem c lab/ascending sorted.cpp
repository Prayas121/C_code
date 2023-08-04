#include<stdio.h>
int main()
{
	int i, temp,j;
	int a[5];
	printf("enter arrays element\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("sorting of data\n");
	for(i=0;i<5;i++)
	{
		for(j=i+1; j<5; j++);
}
	if(a[i]>a[j])
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	printf("sorted data is\n");
	for(i=0;i<5;i++);
	{
		printf("%d\n",a[i]);
		return 0;
	}
	
}
