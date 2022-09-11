#include<cs50.h>
#include<stdio.h>

int main(void)
{
    float regular = get_float("Regular Price: ");
    float sale = regular * 0.85;

    printf("Sale Price: %.2f\n", sale);
}