#include<stdio.h>
#include<math.h>
float emi(float r, float n, float p);       //Function declaration/prototype

int main()
{
    emi(10, 12, 100000);                          //Function call
}

float emi(float r, float n, float p)
{
    float emi;
    r = r/(12*100);
    emi = (p * r * pow(1+r, n)) /(pow(1 + r, n) - 1);
    
    printf("%f\n", emi);
    return emi;
}