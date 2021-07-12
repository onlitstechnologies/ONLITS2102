#include<stdio.h>
int main()
{
	int n, m, i;
	printf("Enter the number of which multiples are to be printed: ");
	scanf("%d", &n);
	printf("How many multiples? ");
	scanf("%d", &m);

	printf("The first %d multiples of %d are:\n", m, n);	
	for(i=1; i<=m; i++)
	{
		printf("%d ", n * i);
	}
	printf("\n");
	return 0;
}
