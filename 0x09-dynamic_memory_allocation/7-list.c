#include <stdio.h>

/**
* main: Printing a list of size 3.
*
* Return: no return.
*/


int main(void)
{
    int list[3];
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    for(int i = 0; i < 3; i++)
    {
        printf("%i\n", list[i]);
    }
}
