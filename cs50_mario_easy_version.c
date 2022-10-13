#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Ask the user for height
    int h;
    do

    {
        h = get_int("Height: ");
    }
    while (h < 1 || h > 8);

    // write the pyramid
    int row, space, column;
    for (row = 0; row < h; row++)
    {
        // Space to align right
        for (space = 0; space < h - row - 1; space++)
        {
            printf(" ");
        }

        for (column = 0; column <= row; column++)
        {
            printf("#");
        }
        printf("\n");
    }
}