#include<stdio.h>
#define PI 3.14		//define a constant
int main()
{
	float r, a;
	printf("Enter radius: ");
	scanf("%f", &r);				//Input function
	a = PI * r * r;
	printf("The area of circle is %1.2f sq. units.\n", a);
	return 0;
}
