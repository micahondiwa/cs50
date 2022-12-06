#include<stdio.h>
#include<stdlib.h>

/**
* main: allocates memory equal to the size of the integer and frees the memory. 
*
* Return: no return.
*/

int main(void)
{
    int *x = malloc(3 * sizeof(int));
     x[0]=72;
     x[1]=72;
     x[2]=33;
     free(x);
}
