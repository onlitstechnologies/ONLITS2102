#include<stdio.h>
int mystrlen(char n[]);       //function declaraion/prototype
int main()
{
    char name[30];
    int len;
    printf("Enter you name: ");
    scanf("%[^\n]", name);
    len = mystrlen(name);
    printf("Your name contains %d characters.\n", len);
    return 0;
}

int mystrlen(char n[])
{
    int i=0;
    while(n[i] != '\0')
    {
        i++;
    }
    return i;
}