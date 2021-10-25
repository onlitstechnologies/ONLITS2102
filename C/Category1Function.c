/*
    Program to demonstrate category 1 of function
    Dated: 25/10/2021
*/

#include <stdio.h>

#define PI 3.14         //contant definition
#define x(y) y*y        //macro definition

int fun();            //function declaration/prototyp
int a, b;               //global variable declaration

int main()
{
    printf("%d", fun());
}

int fun()
{
    return 100;
}

void fun2()
{
    return 50;
}
