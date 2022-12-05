#include<cs50.h>
#include<stdio.h>
#include<string.h>

/**
* main: converts a letter to uppercase
*
* Return: no return.
*/

int main(void)
{
    string s = get_string("Befeore: ");

    printf("After: ");

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - 32);
        }
        else
        {
            printf("%c", s[i]);
        }
        
        printf("\n");
    }
}
