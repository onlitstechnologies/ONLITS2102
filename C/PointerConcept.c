#include <stdio.h>

void print_a();

int main()
{
    int a = 10;
    int *p = a;
    printf("The value of a is %d.\n", a);
    printf("The address of a %p.\n", &a);
    printf("The value of p is %p.\n", p);
    printf("The address of p is %p.\n", &p);
    printf("The value of a displayed through p is %d.\n", *p);
    return 0;
}