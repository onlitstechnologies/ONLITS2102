#include <stdio.h>
int main()
{
    char name[30], i, len = 0, mid, temp;
    printf("Enter your name: ");
    scanf("%[^\n]", name);
    //----------- code to find the length -----------------
    while (name[len] != '\0')
    {
        len++;
    }
    //------------------------------------------------------

    printf("Size of array is %d.\n", len);

    mid = (0 + (len-1)) / 2;

    for (i = 0; i <= mid; i++)
    {
        temp = name[i];
        name[i] = name[len-1 - i];
        name[len-1 - i] = temp;
    }
    printf("The reverse of your name is %s.\n", name);
    return 0;
}