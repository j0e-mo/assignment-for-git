#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ID;

    printf("What's your ID?\n");
    scanf("%d",&ID);

    switch(ID)
    {
        case 1234: printf("Welcome, Harry!\n");
                   break;
        case 5678: printf("Welcome, Ron!\n");
                   break;
        case 1145: printf("Welcome, Hermione!\n");
                   break;
        default:   printf("Wrong ID :( \n");
                   break;
    }
    return 0;
}
