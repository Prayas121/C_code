#include<stdio.h>
struct student {
	char name[20];
	int age;
	float fee;
}s[5];
int  main() {
	 	int i,j;
	 	
	 	for(i=0;i<2;i++){
	 	printf("Enter Name:");
		scanf("%s",s[i].name);
		printf("Enter Age:");
		scanf("%d",&s[i].age);
		printf("Enter FEE:");
		scanf("%f",&s[i].fee);	
		 }
		
		for(i=0;i<2;i++){
		printf("Name: %s\n",s[i].name);
		printf("Age: %d\n",s[i].age);
		printf("fee: %f\n",s[i].fee);	
		}
		
		
	return 0;

}
