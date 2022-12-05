#include<stdio.h>
#include<cs50.h>
#include<math.h>

/**
* main: converts dollars to pennies
*
* Return: no return.
*/

int main(void)

{
    float amount = get_float("Dollar amount: ");
    int pennies = round(amount * 100);

    printf("pennies: %i\n", pennies);
}
