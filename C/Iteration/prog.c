/*
    Print "C was developed by Dennis Ritche in 1972." - 10000 times.
*/

#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 100; i++) //Here i++ means i = i + 1
    {
        printf("%-4dC was developed by Dennis Ritche in 1972.\n", i);
    }
    return 0;
}

/*
    Iteration - Loop
    Intelligent people avoid and dislike monotonous work
*/