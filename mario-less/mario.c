#include <stdio.h>
#include <cs50.h>

void buildPyramid(int height);

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

    // Call the function and pass height to it as a parameter
    buildPyramid(height);
}

// Declare the function buildPyramid
void buildPyramid(int height)
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




#include<cs50.h>
#include<stdio.h>

int main()
{

    int n;
    do
    {
        // Asks for height
        n = get_int("Height: ");
    }
    
    while (n < 1);

    for (int i = 0; i<n; i++)
  {
      for (int j = 0; j < i+1; j++)
      {
          printf("#");
      }
      printf("\n");
  }

}