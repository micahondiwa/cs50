#include<stdio.h>

/**
* main: using pointer arithmetics to print addresses of the numbers in the list of numbers. 
* 
* Return: no return.
*/
int main(void)
{
    int numbers[] = {3,4,5,67,7,0};

    printf("%i\n", *numbers);
    printf("%i\n", *(numbers + 1));
    printf("%i\n", *(numbers + 2));
    printf("%i\n", *(numbers + 3));
    printf("%i\n", *(numbers + 4));
    printf("%i\n", *(numbers + 5));
    printf("%i\n", *(numbers + 6));
}
