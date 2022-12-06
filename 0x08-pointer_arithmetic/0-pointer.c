#include<stdio.h>

/**
* main: using pointer arithmetics to print addresses of the characters in the string. 
* 
* Return: no return.
*/

int main(void)
{
    char *S = "HI!";

    printf("%c\n", S[0]);
    printf("%c\n", *(S+1));
    printf("%c\n", *(S+2));
    printf("%c\n", *(S+3));
}
