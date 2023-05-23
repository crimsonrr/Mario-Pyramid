#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Initialize the variable height
    int height;

    // Run the loop to get a value of height between 1 and 8, inclusive, from the user
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

}

{
    // Adds a new line
    for (int i = 0; i < height; i++)
    {
        // Adds spaces
        for (int k = height - i; k > 1; k--)
        {
            printf(" ");
        }
        // Adds hashes
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}