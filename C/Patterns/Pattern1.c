#include<stdio.h>
int main()
{
    int i, j;
    for(i=1; i<=10; i++)         //runs 5 times
    {
        for(j=1; j<=10; j++)     //runs 25 times
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}