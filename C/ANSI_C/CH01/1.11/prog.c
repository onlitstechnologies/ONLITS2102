#include<stdio.h>
#include<math.h>
int main()
{
	float D, x1=5, y1=5, x2=10, y2=10;
	
	D = sqrt(pow((x2-x1),2) + pow((y2-y1), 2));
	
	printf("D = %1.2f\n", D);
	return 0;
}
