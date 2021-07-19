#include<stdio.h>
int main()
{
    int i, j;
    for(i=1; i<=5; i++)         //runs 5 times
    {
        for(j=1; j<=i; j++)     //runs 15 times
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}