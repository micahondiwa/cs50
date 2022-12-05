#include<cs50.h>
#include<stdio.h>

/**
* main: Prints 'hello, world' if user types on the command-line, and 
* 'Missing command-line argument' if no argument is entered.
*
* Return: 1 if success, 0 otherwise.
*/

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Error: Missing command-line argument.\n");
        return 1;
    }
    
    printf("Hello, world.\n");
    return 0;
}
