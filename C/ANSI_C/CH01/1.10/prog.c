#include<stdio.h>
#include<math.h>
int main()
{
	float A, S, a=5, b=6, c=7;
	S = (a + b + c)/2;
	A = sqrt(S * (S-a) * (S-b) * (S-c));
	printf("A=%1.2f\n", A);
	return 0;
}
