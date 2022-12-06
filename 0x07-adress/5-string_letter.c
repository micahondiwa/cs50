#include<stdio.h>
#include<cs50.h>

/**
* main: prints address of the string, and all letters of the string.
* 
* Return: no return.
*/

int main(void)
{
    string S = "HI!";

    printf("%s\n", S);
    printf("%p\n", S);
    printf("%p\n", &S[0]);
    printf("%p\n", &S[1]);
    printf("%p\n", &S[2]);
    printf("%p\n", &S[3]);
}
