#include<stdio.h>
#include<stdlib.h>

/**
* swap: swaps the values of 2 integers using their memory locations.
* @a: the first integer.
* @b: the second integer.
*
* Return: no return.
*/

void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(&x, &y);
    printf("x is %i, y is %i\n", x, y);
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
