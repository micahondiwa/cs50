#include<stdio.h>
#include<cs50.h>

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