#include<stdio.h>
#include<cs50.h>

int main(void)
{
    string S = "HI!";
    char *p = &S[0];

    printf("%p\n", p);
}