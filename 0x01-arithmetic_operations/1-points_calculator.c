#include<cs50.h>
#include<stdio.h>

/**
* The program promts the user to enter the number of points and compares them with 2. 
* 
* Return: no return value.
*/

int main(void)
{
    int points = get_int("How many points did you lose?: ");

    if (points < 2)
    {
        printf("You lost fewer points than me.\n");
    }
        else if (points > 2)
        {
            printf("You lost more points than me. \n");
        }
        else
        {
            printf("You lost the same number of points as me.\n");
        }
}
