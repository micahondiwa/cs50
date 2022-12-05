#include<cs50.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>

/**
* main: converts a letter to uppercase
*
* Return: no return.
*/

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}
