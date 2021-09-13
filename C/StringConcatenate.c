#include<stdio.h>
#include<string.h>
int main()
{
    char fname[15], lname[15], fullname[30];
    printf("Enter your first name: ");
    scanf("%s", fname);
    printf("Enter your last name; ");
    scanf("%s", lname);
    strcat(fullname, fname);
    strcat(fullname, lname);
    printf("Your full name is %s", fullname);
    return 0;
}