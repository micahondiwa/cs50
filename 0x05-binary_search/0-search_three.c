#include<stdio.h>
#include<cs50.h>

/**
* main: Searching for the number 3 in the list.
* 
* Return: no return.
*/

int main(void)
{
    int numbers [] = {9,3,4,5,7,8,9,2};

    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == 3)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
