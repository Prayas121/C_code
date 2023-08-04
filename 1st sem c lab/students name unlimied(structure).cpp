#include<stdio.h>
struct student
{
	char name[50];
	int roll;
	int age;
	float fee;
}s[10];
int main()
{
	int i,j,num;
	printf("enter num\n");
	scanf("%d", &num);
	for(i=0; i<num; i++){
	printf("enter data of student no: [%d]\n" ,i+1 );
	printf("Name:\n");
	scanf("%s",s[i].name);	
	printf("Roll.no:\n");
	scanf("%d",&s[i].roll);
	printf("Age:\n");
	scanf("%d", &s[i].age);
	printf("Fee\n");
	scanf("%f",&s[i].fee);
	}
	for(i=0; i<num; i++)
	{	
	printf("Student No:[%d]\n",i+1);
	printf("Name:%s\n",s[i].name);
	printf("Age:%d\n",s[i].age);
	printf("Roll:%d\n",s[i].roll);
	printf("Fee:%f\n",s[i].fee);
	}
	return 0;
	
	
}
