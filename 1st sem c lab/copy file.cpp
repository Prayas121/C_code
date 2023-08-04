#include<stdio.h>
#include<stdlib.h>
int main() {
	char c;
	
	FILE *f1, *f2;
	
	f1 = fopen("kiran.txt","r");
	if(f1 == NULL){
		printf("F N F");
		return 1;
	}
	
	f2 = fopen("paras.txt","w");
	if(f2 == NULL){
		printf("F N F");
		return 1;
	}
	
	c = fgetc(f1);
	while(c!=EOF){
		fputc(c,f2);
		c = fgetc(f1);
	}
	fclose(f1);
	fclose(f2);
	return 0;
}
