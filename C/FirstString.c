#include<stdio.h>
int main()
{
    char name[30];
    printf("Enter your name: ");
    // scanf("%s", name);                       //Single word string
    scanf("%[^\n]", name);                      //Multi word string
    printf("Good afternoon! %s\n", name);
}