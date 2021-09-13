#include<stdio.h>
float pi();             //Function declaration/prototype

int main()
{
    float area, r;
    printf("Enter radius: ");
    scanf("%f", &r);
    area = pi() * r * r;                //Function call
    printf("Area is: %f\n", area);
    return 0;
}

//------ Function Definition -------------
float pi()          //---------------- Function header                 
{                   //----------------- Function body
    return 22.0F/7.0F;
}

/*
    Function header has three parts:
        1) Function name
        2) Function Type/Return value type
        3) List of Parameters
*/