#include<stdio.h>
#include<stdlib.h>

/**
* main: allocates memory equal to the size of the integer.
*
* Return: no return.
*/

int main(void)
{
    int *x = malloc(3 * sizeof(int));
    x[1] = 72;
    x[2] = 72;
    x[3] = 33;
}
