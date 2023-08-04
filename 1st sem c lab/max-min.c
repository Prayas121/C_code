//WAP to find the min and max value using array
#include<stdio.h>
#define MAX_SIZE 100
int main() {
	int min,max,size,i;
	int arr[MAX_SIZE];
	printf("Enter the Size of array:");
	scanf("%d",&size);
	
	for(i=0; i<size; i++) {
		printf("Enter value No:[%d]:",i+1);
		scanf("%d", &arr[i]);
	}
	
	max = arr[0];
	min = arr[0];
	
	for(i=1; i<size; i++) {
		if(arr[i] > max) {
			max = arr[i];
		}
	}
	for(i=1; i<size; i++) {
		if(arr[i] < min) {
			min = arr[i];
		}
	}	
	printf("The Max value is %d\n",max);
	printf("The Min Value is %d\n",min);
	return 0;
}
