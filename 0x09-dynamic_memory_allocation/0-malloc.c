#include<cs50.h>
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
* main: getes a string, allocates a memory for it and change it to uppercase.
*
* Return: no return.
*/

int main(void)
{
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    strcpy(t, s);

    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    printf("t: %s\n", t);
}
