/*
Program to accept two integers and print the larger one
This program is part of Assignment 2
Date: 20210701
*/

#include<stdio.h>
int main()
{
	int a, b;		//4 byte + 4 byte
	printf("PROGRAM TO FIND THE LARGER INTEGER OF TWO\n\n");
	printf("Enter a number: ");
	scanf("%d", &a);
	printf("Enter another number: ");
	scanf("%d", &b);
	if(a>b)
	{
		printf("%d\n", a);
	}
	else
	{
		printf("%d\n", b);
	}
}
