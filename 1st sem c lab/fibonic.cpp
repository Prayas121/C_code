#include<stdio.h>
int fibonacci(int);
int main()
{
	int i=0;
	int c, n;
		printf("fibonacci series\n");
	scanf("%d",&n);
	for(c=1; c<=n; c++)
	{
		printf("%d is the fibonuc\n",fibonacci(i));
		i++;
	}
	return 0;
}
int fibonacci(int)
{
	int n;
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else
	return(fibonacci(n-1)+fibonacci(n-2));
}

