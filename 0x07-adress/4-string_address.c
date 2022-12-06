#include<stdio.h>
#include<cs50.h>

/**
* main: prints address of the string, and the first letter of the string.
* 
* Return: no return.
*/

int main(void)
{
    string S = "HI!";
    char *p = &S[0];

    printf("%p\n", p);
    printf("%p\n", S);
}
