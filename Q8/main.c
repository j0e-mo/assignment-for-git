#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num;

    printf("What's the number you want the table for?\n");
    scanf("%d",&num);

    for(i=0;i<=num;i++)
    {
            printf("%d * %d = %d \n",i,num,i*num);
    }
    return 0;
}
