#include<cs50.h>
#include<stdio.h>

/**
* main: Prompts user to agree or disgaree
* 
* Return: no return.
*/

int main (void)
{
    char c = get_char("Do you agree? ");

    if (c == 'y')
    {
        printf("Agreed\n");
    }
    else if (c == 'n')
    {
        printf("Disagreed.\n");
    }
}
