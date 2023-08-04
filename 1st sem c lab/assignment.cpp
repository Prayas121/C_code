#include<stdio.h>
main(){
	int marks;
	printf("enter the marks of the students\n");
	scanf("%d", &marks);
	if(marks>=90)
		printf("it is grade A\n");
	
	else if(marks<89 &&marks>=70)
	printf("it is grade B\n");
	
		else if(marks<=69 &&marks>50)
		
			printf("it is grade C\n");
		
	else if(marks<50)
	printf("it is grade fail\n");
	
	else

		printf("no grade\n");
		
	return 0; 
	}
	
	

