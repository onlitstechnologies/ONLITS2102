#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character: ");
	scanf("%c", &ch);
	if(ch>=65 && ch<=90)
	{
		printf("The given character is an alphabet.\n");
	}
	else if(ch>=97 && ch<=122)
	{
		printf("The given character is an alphabet.\n");
	}
	else
	{
		printf("The given character is not an alphabet.\n");
	}
	return 0;
}
