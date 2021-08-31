#include<stdio.h>
int main()
{
    float d, t, s;
    printf("Enter distance (in kms): ");
    scanf("%f", &d);
    printf("Enter time (in hours): ");
    scanf("%f", &t);
    s = d/t;
    printf("The speed is %1.2f kmph.\n", s);
    return 0;
}