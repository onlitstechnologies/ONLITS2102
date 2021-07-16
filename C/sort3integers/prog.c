#include<stdio.h>
int main()
{
	int a, b, c, t;
	printf("Enter three integers below:\n");
	scanf("%d%d%d", &a, &b, &c);
	if(a>b)
	{
		t = a;
		a = b; 
		b = t;
	}
	if(b>c)
	{
		t = b;
		b = c;
		c = t;
	}
	if(a>b)
	{
		t = a;
		a = b; 
		b = t;
	}
	
	printf("The integers in sorted order are: %d, %d, %d.\n", a, b, c);
}


/*
	10, 5, 3
	
	after 1st if
	5, 10, 3
	
	after 2nd if
	5, 3, 10
	
	after 3rd if
	3, 5, 10
*/
