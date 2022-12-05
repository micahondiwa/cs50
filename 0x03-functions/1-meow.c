#include<cs50.h>
#include<stdio.h>

/**
* meow: Printing 'meow' n times.
*
* @n: the number of time to print "meow". 
* Return: no return.
*/

void meow(int n);

int main(void)
{
    meow(3);
}
void meow(int n)
{
    for (int i = 0; i <= n; i++)
    {
        printf("meow\n");
    }
}
