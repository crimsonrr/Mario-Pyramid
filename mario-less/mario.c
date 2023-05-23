#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Positive Number: ");
    }
    while (n < 1 || n > 8);

     // Add a new line
     for (int i = 0; i < n; i++)
  {
    // Add spaces
      for (int j = n - i; j < n; j--)
      {

          printf(" ");
      }
    // add hash symbols
    for (int k = 0; j <= i; j++)
    {
        printf("#");
        printf("\n");
    }
  }
}