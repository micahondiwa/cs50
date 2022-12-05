#include<stdio.h>
#include<cs50.h>
#include<string.h>

/**
* main: Printing an output same as input.
*
* Return: no return.
*/

int main(void)
{
    string s = get_string("Input: ");

    printf("Output: ");
    
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c", s[i]);
    }
    
    printf("\n");
}
