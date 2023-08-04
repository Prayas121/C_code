#include<stdio.h>
int display_arr(int a[]);
int main()
{
	int a[5], i;
	printf("enter the array\n");
	for(i=0; i<5; i++)
	{
		scanf("%d", &a[i]);}
		display_arr(a);
		return 0;
}
int display_arr(int a[])

	{
	int i;
	for(i=0; i<5; i++){
		printf("%d\n",a[i]);
	}

}
