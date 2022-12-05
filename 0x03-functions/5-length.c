#include<cs50.h>
#include <stdio.h>

/**
* string_length: Calculates the length of a string.
*
*@name: the input string from the user.
*Return: length of the string. 
*/

int length = string_length(name);

int main (void)
{
    string name = get_string("Name: ");
    int length = string_length(name);
    printf("%i\n", length);
}


int string_length(string s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}
