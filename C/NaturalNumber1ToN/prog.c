#include<stdio.h>
int main()
{
	int i, n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("The natural numbers from 1 to %d are:\n", n);
	for(i=1; i<=n; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	return 0;
}
