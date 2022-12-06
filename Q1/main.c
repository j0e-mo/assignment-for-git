#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hours, salary;

    printf("How many hours did you work last week?\n");
    scanf("%d",&hours);

    if (hours>=40)
        salary = hours * 50;
    else
        salary = (hours*50)-(hours*5);

    printf("This week's salary is: %d\n",salary);
    return 0;
}
