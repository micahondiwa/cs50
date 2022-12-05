#include<cs50.h>
#include<stdio.h>

/**
* main: prints "?" n times, where n is entered by the user. 
*
* @n: the number of times to print "?".
* Return: no return.
*/

int main(void)
{
    int n;

    do
    {
        n = get_int("Width: ");
    }
    while (n < 1);

    for (int i = 0; i < n; i++)
    {
        printf("?");
    }
    {
        printf("\n");
    }
}
