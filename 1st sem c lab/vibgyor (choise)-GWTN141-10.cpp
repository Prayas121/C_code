#include<stdio.h>
int main()
{
	int num;
	printf("Choose a number\n");
	scanf("%d",&num);
	
	switch(num)
	{
		case 1:
			printf("Violet");
			break;
		
		case 2:
			printf("Indigo");
			break;
		
		case 3:
			printf("Black");
			break;
			
		case 4:
			printf("Green");
			break;
			
		case 5:
			printf("Yellow");
			break;
			
		case 6:
			printf("Orange");
			break;
			
		case 7:
			printf("Red");
			break;
			
		default:
			printf("Invalid!!");
	} return 0;
}

