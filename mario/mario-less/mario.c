#include <stdio.h>
#include <cs50.h>

int main(void)
{
int height;
int: spaces;
int; hash;

do {
   height = get_int("Height: ");
}
   while(height < 0 || height > 23);

for (int i = 0; i < height; i++)
{
    // Print spaces
    for (spaces = (height - i); spaces >= 2; spaces--)
    {
        printf(" ");

    }
    // Print hashes
    for (hash = 0; hash <= (i + 1); hash++)
    {
        printf("#");
    }
    printf("\n");
}
}





