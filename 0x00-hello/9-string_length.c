#include<cs50.h>
#include<stdio.h>
#include<string.h>

/**
 * main - Prints out the length of a string entered by a user.
 *
 * Return: length of string.
 */

int main(void)
{
    string name = get_string("Name: ");
    int length = strlen(name);

    printf("Length: %i\n", length);
}
