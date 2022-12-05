#include<cs50.h>
#include<stdio.h>

/**
* The program promts the user to enter the number of points and compares them with 2. 
*
* Return: no return.
*/

int main(void)
{
    int points = get_int("How many points did you lose? ");
    const int MINE = 2;

    if (points < MINE)
    {
        printf("You lost fewer points than me.\n");
    }
    else if (points > MINE)
    {
        printf("You lost more points than me.\n");
    }
    else
    {
        printf("You lost the same number of points as me.\n");
    }
}
