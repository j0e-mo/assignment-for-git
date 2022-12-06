#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,num,factorial=1;

    printf("What's the number you want to find the factorial of?\n");
    scanf("%d",&num);

    while(i<=num)
    {
        factorial = i*factorial;
        i++;
    }

    printf("The factorial of %d is %d.\n",num,factorial);
    return 0;
}
