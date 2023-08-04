#include<stdio.h>
int main()
{int choise;
int a,b, add,sub, mul,div,rem;
printf("menu\n 1.add\n 2.sub\n 3.mul\n 4.div\n 5.rem\n");
printf("enter the choise\n");
scanf("%d",&choise);
printf("enter the value of a and b\n");
scanf("%d", &a,&b);
switch(choise)
{ case:1 add=a+b;
printf("add=%d\n",add);
break;
case: 2 sub=a-b;
printf("sub=%d\n",sub);
break;
case: 3 mul=a*b;
printf("mul=%d",mul);
break;
case: 4 div=a/b;
printf("div=%d",div);
break;
case: 5 rem=a%d;
printf("rem=%d\n",rem);
break;
default:
	printf("invalid choise\n");
} return 0;}
