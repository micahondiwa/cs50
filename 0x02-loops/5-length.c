#include<stdio.h>
#include<cs50.h>

/**
* main: rints out the length of a name/variable entered by a user
* 
* Return: no return.
*/

int main (void)
{
    string name = get_string("Name: ");

    int i = 0;
    while (name[i] != '\0')
    {
        i++;
    } 
    
    printf("%i\n", i);
}
