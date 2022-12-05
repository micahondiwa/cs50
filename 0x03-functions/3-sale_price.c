#include<cs50.h>
#include<stdio.h>

/**
* discount: calculates the actual sales price after the discount.
*
* @price: the selling price.
* @percentage: the percentage discount.
*Return: sales price after the discoun.
*/
float discount(float price, int percentage);

int main (void)
{
    float regular = get_float("Regular price: ");
    int percent_off = get_int("Percent off: ");
    float sale = discount(regular, percent_off);

    printf("Sale price: %.2f\n", sale);
}

float discount(float price, int percentage)
{
    
    return price * (100 - percentage) / 100;
}
