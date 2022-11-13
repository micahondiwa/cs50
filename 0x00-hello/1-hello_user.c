#include <cs50.h>
#include <stdio.h>

/**
 * main- promts user to enter their name and prints hello, user.
 *
 * Return: no return.
 */

int main(void)
{
    printf("Hello, %s\n", get_string("What is your name? "));
}
