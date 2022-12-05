#include<cs50.h>
#include<stdio.h>

/**
* get_negative_int: Checks whether an integer is a negative value.
*
* Return: no return.
*/
int get_negative_int(void);

int main(void)
{
    int i = get_negative_int();

    printf("%i\n", i);
}
int get_negative_int(void)
{
    int n;
    do
    {
        n = get_int ("Negative Integer: ");
    }
    while (n < 0);
    return n;
}
