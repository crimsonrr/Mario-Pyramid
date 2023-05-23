
#include<cs50.h>
#include<stdio.h>

int main()
{

    int n;
    do
    {
        // Asks for height
        n = get_int("Number: ");
    }

    while (n < 1 || n > 8);
    // For each row
    for (int i = 0; i < n; i++)
    {
        //  For each column
        for (int j = 0; j < i + 1; j++)
        {
// Print a hash symbol
            printf("#");
        }
// Next line
        printf("\n");
    }

}