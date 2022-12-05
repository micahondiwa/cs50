#include<cs50.h>
#include<stdio.h>

/**
* main: Promts the user to enter the regular sales price, and calculates the actual sales price after the discount.
* 
* Return: no return.
*/

int main(void)
{
    float regular = get_float("Regular Price: ");
    float sale = regular * 0.85;

    printf("Sale Price: %.2f\n", sale);
}
