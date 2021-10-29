/* 
Write a modular(function based) and menu based program to perform some simple arithmetic calcuations (add, subtract etc)
*/

#include <stdio.h>
#include <stdlib.h>

void add();
void sub();
void mul();
void quo();

int main()
{
    int ch;
    do
    {
        printf("\t\tMENU\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("Enter choice (0) to exit: ");
        //ch = getchar();
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            exit(0);
            break;
        case 1:
            add();
            break;

        case 2:
            sub();
            break;
        case 3:
            mul();
            break;
        case 4:
            quo();
            break;
        default:
            printf("Invalid Option!\n");
        }
    } while (1); //Created an infinite loop
}

void add()
{
    int augend, addend, sum;
    printf("Enter augend: ");
    scanf("%d", &augend);
    printf("Enter addend: ");
    scanf("%d", &addend);
    sum = augend + addend;
    printf("The sum is %d\n", sum);
}

void sub()
{
    int minuend, subtrahend, difference;
    printf("Enter minuend: ");
    scanf("%d", &minuend);
    printf("Enter subrahend: ");
    scanf("%d", &subtrahend);
    difference = minuend - subtrahend;
    printf("The difference is %d\n", difference);
}

void mul()
{
    int multiplicand, multiplier, product;
    printf("Enter multiplicand: ");
    scanf("%d", &multiplicand);
    printf("Enter multiplier: ");
    scanf("%d", &multiplier);
    product = multiplicand * multiplier;
    printf("The product is %d\n", product);
}

void quo()
{
    int dividend, divisor, quotient, remainder;
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    printf("The quotient is %d and the remainder is %d\n", quotient, remainder);
}