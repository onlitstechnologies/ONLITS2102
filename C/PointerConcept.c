#include <stdio.h>
int main()
{
    int* p;
    printf("Enter a number: ");
    scanf("%d", p);
    printf("The value at which p is pointing is %d.", *p);
    return 0;
}