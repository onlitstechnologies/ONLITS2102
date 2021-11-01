#include <stdio.h>

void increment_v(int a);
void increment_r(int *b);

int main()
{
    int a = 10, b = 20;
    // -------------------- Call By Value ------------------------
    printf("The value of a before calling increment %d.\n", a);
    increment_v(a); //function call
    printf("The value of a after calling increment %d.\n", a);

    // -------------------- Call By Referennce ------------------------

    printf("The value of b before calling increment %d.\n", b);
    increment_r(&b); //function call
    printf("The value of b after calling increment %d.\n", b);

    return 0;
}

//---------- For call by
void increment_v(int a)
{
    a++;
}

void increment_r(int *b)
{
    (*b)++;
}