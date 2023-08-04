#include<stdio.h>
int main()
{
	int n,i,count;
	count=0;
	printf("Enter the nb.\n");
	scanf("%d", &n);
	for(i=0; i<=n; i++){
		if(n%i==0){
			count++;
		}
}
	if(count==2){
	
	
		printf("prime nb");
		else
		printf("not a prime");
}

	return 0;
}
