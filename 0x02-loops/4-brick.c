#include<cs50.h>
#include<stdio.h>

/**
* main: Printing a brick of #.
*
* @n: the number of times to print # to produce a brick.
* Return: no return.
*/

int main(void)
{
    int n;

    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
    printf("#");
    }
    printf("\n");
    }
}
