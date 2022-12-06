#include<stdio.h>
#include<stdlib.h>

/**
* main: printing string with malloc
*
* Return: no return.
*/

int main(void)
{
    char *s = malloc(4);
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);
}
