#include <stdio.h>
int main()
{
    int integer, reverse = 0, temp, d;
    printf("Enter an integer: ");
    scanf("%d", &integer);

    temp = integer;

    while (temp > 0)
    {
        d = temp % 10;
        reverse = reverse * 10 + d;
        temp = temp / 10;
    }
    printf("The reverse of %d is %d.\n", integer, reverse);
}