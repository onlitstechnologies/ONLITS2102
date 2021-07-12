#include<stdio.h>
int main()
{
	int n, i, count=0;
	printf("Enter the number: ");
	scanf("%d", &n);
	
	//-------- Counting factors ----------------

	for(i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count<=1)
	{
		printf("%d is neither prime nor composite\n", n);
	}
	else if(count==2)
	{
	printf("%d", )
	}
	printf("\n");
	return 0;
}
