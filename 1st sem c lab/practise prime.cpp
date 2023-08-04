#include<stdio.h>
int main()
{

	int i, n, flag=0;
	printf("enter no\n");
	scanf("%d", &n);
	if(n<=1)
	{
		printf("not prime");
	}
	else
	for(i=2; i<n/2; i++)
	
{

		if(n%i==0){
		flag=1;
		break;
	}
}
	
		if(flag==0){
			printf("prime");}
			else
			{printf("ot prime");
			}
	return 0;	
}
