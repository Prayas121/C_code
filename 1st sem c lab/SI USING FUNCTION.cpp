#include<stdio.h>
float SI_ptr(float p, float t,float r);
int main()
{
	float p, t,r,SI;
	printf("enter the value\n");
	scanf("%f %f %f", &p,&t,&r);
	SI= SI_ptr(p,t,r);
	printf("%f is the value of S.I\n",SI);
	return 0;
}
float SI_ptr(float p, float t, float r)
{
	float SI;
	SI=p*t*r/100;
	return SI;
}

