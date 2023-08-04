#include<stdio.h>
int main()
{
	int N , value,number;
	printf("enter the values\n");
	scanf("%d", &N);
	
	FILE *numberfile=fopen("NUMBER.TXT","w");
	if(numberfile==null){
		printf("invalid");
return 1;
	}
	printf("Enter %d the number\n",N);
	for(i=0; i<N; i++){
		scanf("%d", &value)
		fprintf(numberfile, "%d", value);
	}
	fclose(numberfile);
	numberfile=fopen("NUMBER.TXT","r");
	if(numberfile==null){
		printf("invalid");
		return 1;
	}
	FILE *even=fopen("EVEN.TXT","w");
	FILE *odd=fopen("odd.txt","w");
	if(even==null || odd==NULL){
		printf("invalid");
		return 1;
	}
	while(fscanf(numberfile,"%d",number)!=EOF){
	
	if (number%2==0){
		fprintf(even, "%d",number);
		else
		fprintf(odd,"%d", number);
	}
	}
	fclose(numberfile)l
	fclose(even);
	fclose(odd);
	return 0;
	
	
}
