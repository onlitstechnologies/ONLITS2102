#include <stdio.h>
#define SIZE 5
int main()
{
    int i, j, t, arr[SIZE] = {32, 5, 19, 100, 11};

    printf("The unsorted array is:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d\n", arr[i]);
    }

    for (i = 0; i < SIZE - 1; i++)
    {
        for (j = i + 1; j < SIZE; j++)
        {
            if (arr[i] > arr[j])
            {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }

    printf("The sorted array is:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}