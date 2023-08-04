#include <stdio.h>
int main()
{int days;
printf ("enter the days\n");
scanf ("%d", &days);
if (days==1)
printf ("it is sunday");
else
if (days==2)
printf ("it is monday");
else
if (days==3)
printf ("it is tuesday");
else
if (days==4)
printf ("it is wednesday");
else
if (days==5)
printf ("it is thursday");
else
if (days==6)
printf ("it is friday");
else
if (days==7)
printf ("it is saturday");
else
printf("no days");
return 0;
}
