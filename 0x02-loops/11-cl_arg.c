#include<cs50.h>
#include<stdio.h>

/**
* Main: Prints "Hello, World" using if, else condition.
*
* Return: no return.
*/

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("Hello, %s\n", argv[1]);
    }
    else
    {
        printf("Hello, world\n");
    }
}
