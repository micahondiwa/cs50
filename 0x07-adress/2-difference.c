#include<stdio.h>
#include<cs50.h>

/**
* main: prints both the integer and it's address.
* 
* Return: no return.
*/

int main(void)
{
    int n = 50;
    int *p = &n;

    printf("%p\n", p);
    printf("%i\n", *p);
}
