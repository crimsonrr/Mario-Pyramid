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


