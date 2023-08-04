#include<stdio.h>
int main(){
	int num, fact=1;
	printf("enter my number\n");
	scanf("%d",&num);
	if(num<0)
	{
		printf("there is no factoriar \n");
	}
	else{
		for(int i=1; i <=num; i++)
		{
			fact= fact*i;
		}
	}
	printf("%d is the factorial of %d",fact,num);
	return 0;
}
