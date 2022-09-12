#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    string names [] = {"Micah", "Kondiwa"};
    string numbers [] = {"+254-706-613-212","+254-720-963-680" };

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(names[i], "Micah") == 0)
        {
            printf("Found: %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}