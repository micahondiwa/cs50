#include<cs50.h>
#include<stdio.h>

/**
* main: uses pointers to comapre 2 integers and print s"Same" or "Difference".
*
* Return: no return.
*/

int main (void)
{
    int i = get_int("i: ");
    int j = get_int("j: ");

    if (i == j)
    {
        printf("Same\n");
    }
    else
    {
        printf("Difference\n");
    }
}
