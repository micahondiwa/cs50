#include<cs50.h>
#include<stdio.h>
#include<string.h>

int main (void)
{
    char *t = get_string("t: ");
    char *s = get_string("s: ");

    if (strcmp(s,t) == 0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Difference\n");
    }
}