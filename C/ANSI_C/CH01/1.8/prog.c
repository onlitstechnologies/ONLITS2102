#include<stdio.h>
int main()
{
	int a=300, b=70, c=70, x;
	if(b==c)
	{
		printf("Division by zero will occur! cannot proceed!\n");
	}
	else
	{
		x = a/(b-c);
		printf("x=%d\n",x);
	}
	return 0;
}
