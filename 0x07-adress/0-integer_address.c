#include<stdio.h>
#include<cs50.h>

/**
* main: printing the address of an integer
* 
* Return: no return.
*/

int main(void)
{
    int n = 50;
    int *p = &n;
    printf("%p\n", p);
}
