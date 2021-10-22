#include<stdio.h>
int main()
{
    int a, b, c;
    int *p = &a;
    int *q = &b;
    int *r = &c;

    printf("Enter a number: ");
    scanf("%d", p);
    printf("Enter another number: ");
    scanf("%d", q);

    *r = *p + *q;

    printf("The sum is %d.\n", *r);
    return 0;
}