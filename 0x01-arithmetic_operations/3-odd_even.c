#include<cs50.h>
#include<stdio.h>

/**
* main: Testing for even and odd numbers. 
*
* Return: no return
*/

int main(void)
{
    int n = get_int("n: ");

    if (n % 2 == 0)
    {
        printf("%i is even.\n", n);
    }
    else
    {
        printf("%i is odd.\n", n);
    }
}
