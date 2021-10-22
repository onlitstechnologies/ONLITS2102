#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p, *q, *r;

    p = malloc(4);
    q = malloc(4);
    r = malloc(4);

    printf("Enter a number: ");
    scanf("%d", p);
    printf("Enter another number: ");
    scanf("%d", q);
    *r = *p + *q;
    printf("The sum is %d.\n", *r);
    return 0;
}