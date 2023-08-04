#include<stdio.h>
int main()
{ int num, sum;
sum=0;
do{
	printf("unless num\n");
	scanf("%d", &num);
	sum=sum+num;
}
while(num!=0);
printf("sum=%d\n",sum);
return 0;
}
