#include <stdio.h>
int main()
{
	int n, i, count = 0;
	printf("Enter the number: ");
	scanf("%d", &n);

	//-------- Counting factors ----------------

	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			count++;
			break;
		}
	}
	if (n == 1)
	{
		printf("%d is neither prime nor composite\n", n);
	}
	else if (count == 0)
	{
		printf("%d is prime.\n", n);
	}
	else
	{
		printf("%d is composite.\n", n);
	}
	printf("\n");
	return 0;
}
