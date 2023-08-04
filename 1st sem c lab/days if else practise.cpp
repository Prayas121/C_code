#include<conio.h>
#include<stdio.h>
 int main()
{
int days;
printf("enter the days\n");
scanf("%d", &days);
if(days==1)
printf("it is sunday\n");
else if(days==2)
printf("it is monday\n");
else if(days==3)
printf("it is tuesday\n");
else if(days==4)
printf("it is wednesday\n");
else if(days==5)
printf("it is thursday\n");
else if(days==6)
printf("it is friday\n");
else if(days==7)
printf("it is saturday\n");
else
printf("no days");
getch();
return 0;
}
