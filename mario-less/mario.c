#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Declaring variables
    int height = 0;
    int line = 0;
    int column = 0;

    while (true)
    {
        // Asks for number
        height = get_int("Number: ");

        if (height >= 1 && height <= 8)
        {
            break;
        }
    }

    // Adds a row
    for ( line = 1 ; line <= height ; line++ )
    {
    // Adds a column
        for ( column = 1 ; column <= height ; column++ )
        {
           // Prints hash symbols
            if ( column >= height + 1 - line )
            {
                printf("#");
            }
            else
            {
                // Prints spaces
                printf(" ");
            }
        }

        printf("\n");
    }
}