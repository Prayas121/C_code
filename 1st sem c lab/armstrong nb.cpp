#include<stdio.h>
int main()
{
int num, sum, rem,n;
printf("enter the no\n");
scanf("%d",&num);
num=n;
do {
	rem=n%10;
	sum=sum+rem*rem*rem;
	n/=10;
} 
while(n!=0);
if(sum=n)
{printf("it is an armstrong\n");
printf("n=%d\n",n);
}
else{
printf("not armstrong\n");
}  return 0;
}

