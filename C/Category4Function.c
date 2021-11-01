#include <stdio.h>
float PI();
int main()
{
    float r, a;
    printf("Enter radius: ");
    scanf("%f", &r);
    a = PI() * r * r;
    printf("The area is %f.\n", a);
    return 0;
}

float PI()
{
    return 22.0F/7.0F;
}