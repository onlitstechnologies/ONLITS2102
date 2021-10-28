#include <stdio.h>

void draw_rectangle(int width, int height);

int main()
{
    int width, height;
    printf("Enter width: ");
    scanf("%d", &width);
    printf("Enter height: ");
    scanf("%d", &height);
    draw_rectangle(width, height);
    return 0;
}

void horizontal_line(int width)
{
    printf("+");
    for (int i = 1; i <= width; i++)
    {
        printf("-");
    }
    printf("+\n");
}

void draw_rectangle(int width, int height)
{
    horizontal_line(width);

    for (int i = 1; i <= height; i++)
    {
        printf("|");
        for (int j = 1; j <= width; j++)
        {
            printf(" ");
        }
        printf("|\n");
    }

    horizontal_line(width);
}