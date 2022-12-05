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
    string s = get_string("Input : ");

    printf("Output: ");
    
    int length = strlen(s);
    
    for (int i = 0; i < length; i++)
    {
        printf("%c", s[i]);
    }
    
    printf("\n");
}
