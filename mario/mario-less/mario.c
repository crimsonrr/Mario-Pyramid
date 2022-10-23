#include <stdio.h>
#include <cs50.h>

    int main(void)

    {
        int n;
        do
        {
           n = get_int("Size: ");
        }
       while (n < 1);
      // For each row..
       for (int x = 0; x < n; x++)
       {
         // For each column..
         for (int y = 0; y < n; y++)
         {
            // Draw a block. 
            printf("#");
         }

      }
    }
