#include<stdio.h>
int main()
{ int num,rem, sum;
sum=0;
printf("enter the no.\n");
scanf("%d",&num);
do{
	rem=num%10;
	sum=sum+rem;
	num=num/10;
}
while(num!=0);
printf("sum=%d\n",sum);
return 0;
}
