#include<cs50.h>
#include<stdio.h>


 int main(void)
 {
    int x = get_int("x: ");
    int y = get_int("y: ");

    int z = x + y;

    printf("Sum: %i\n",z);
    return (0);
 }
