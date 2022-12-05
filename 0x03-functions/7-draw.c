#include<stdio.h>
#include<cs50.h>

/**
* draw: draws a triangle with #
*
*@Height: the height of the triangle.
*Return: no return.
*/

void draw(int n);

int main(void)
{
    int height = get_int("Height: ");

    draw(height);
}

void draw(int n)
{
    if (n <= 0)
    {
        return;
    }
    draw(n-1);

    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}
