#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("Gimme a number, quick!\n");
    scanf("%d",&x);

    if(x%2)
        printf("Thanks man! it's ODD btw\n");
    else
        printf("Thanks man! it's EVEN btw\n");

    return 0;
}
