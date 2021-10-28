#include <stdio.h>

int sum(int augend, int addend);

int main()
{
    int marks1, marks2, total;
    printf("Enter Marks 1: ");
    scanf("%d", &marks1);
    printf("Enter Marks 2: ");
    scanf("%d", &marks2);
    total = sum(marks1, marks2);
    printf("The total marks is %d.\n", total);
    return 0;
}

int sum(int augend, int addend)
{
    int sum;
    sum = augend + addend;
    return sum;
}