#include<stdio.h>
int main()
{
int i,sum,avg;
i=10;
sum=0;
do
{ 
sum=sum+i;
 i++;
}
  while(i<20);
printf("sum=%d\n",sum);
avg=sum/2;
printf("avg=%d\n",avg);
return 0;}
