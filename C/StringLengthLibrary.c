#include<stdio.h>
#include<string.h>
int main()
{
    char name[30];
    int len;
    printf("Enter you name: ");
    scanf("%[^\n]", name);
    len = strlen(name);
    printf("Your name contains %d characters.\n", len);
    return 0;
}