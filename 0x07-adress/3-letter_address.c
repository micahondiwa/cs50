#include<stdio.h>
#include<cs50.h>

/**
* main: prints the address of the fisrt leter in the string
* 
* Return: no return.
*/

int main(void)
{
    string S = "HI!";
    char *p = &S[0];

    printf("%p\n", p);
}
