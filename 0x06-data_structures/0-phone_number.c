#include<stdio.h>
#include<cs50.h>
#include<string.h>

typedef struct
{
    string name;
    string number;
}

person;

int main(void)
{
    person people[2];

    people[0].name = "Micah";
    people[0].number = "+254-706-613-212";

    people[1].name = "Kondiwa";
    people[1].number = "+254-720-96-3680";

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, "Micah") == 0)
        {
            printf("Found: %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}