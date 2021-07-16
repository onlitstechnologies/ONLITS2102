#include<stdio.h>
#define SIZE 10
int main()
{
	int a[SIZE], i;
	printf("Enter %d values below:\n", SIZE);
	for(i=0; i<SIZE; i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("\nThe elements of array are as follows:\n");
	for(i=0; i<SIZE; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}
