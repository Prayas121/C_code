#include<stdio.h>
int main()
{
	int i, n,flag=0;
	printf("Enter the no\n");
	scanf("%d",&n);
	if(n<=1){
		printf("it is not a prime no\n");
	}
	else 
	{
	for(i=2; i<=n/2; i++){
if(n%i==0)
flag=1;
break;}}
if(flag==0)
{
	printf("it is a prime no\n");
	}else
{	printf("not");
}
return 0;
}
