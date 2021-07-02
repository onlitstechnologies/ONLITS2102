/*
	Leap year problem using nested if-else
*/

#include<stdio.h>
int main()
{
	int year;
	printf("Enter year: ");
	scanf("%d", &year);
	if(year % 4 == 0)
	{
		if(year % 100 != 0)
		{
			printf("Leap year\n");
		}
		else
		{
			if(year % 400 == 0)
			{
				printf("Leap year\n");
			}
			else
			{
				printf("Common year\n");
			}
		}
	}
	else
	{
		printf("Common year\n");
	}
	
	return 0;
}
