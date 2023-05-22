#include <stdio.h>
#include <cs50.h>

int main(void)
{
// asks for name
    string name = get_string("What is you name?\n");
// replies to given name with a greeting
    printf("Hello, %s\n!", name);
}