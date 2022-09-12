#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    string names [] = {"Micah", "Oketch", "Kondiwa", "Tila", "Sibuor", "Ratego"};

    for (int i = 0; i <= 6; i++)
    {
        if (strcmp(names[i], "Tila") == 0)
        {
            printf("Found\n");
            return 1;
        }
    }
}