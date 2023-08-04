#include<stdio.h>
void SI_ptr();
int main()
{
	float p, t,r,SI;
	printf("enter the value\n");
	scanf("%f %f %f", &p,&t,&r);
	 SI_ptr(p,t,r);

	
}
void SI_ptr(float p, float t, float r)
{
	float SI;
	SI=p*t*r/100;
	 printf("%f is tgdjfjk",SI);
}

