#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num;
    float sum=0.0,avg;

    for(i=0;i<10;i++)
    {
        printf("Gimme a number:\n");
        scanf("%d",&num);
        sum = sum + num;
    }
    avg = sum/10.0;
    printf("The summations of the numbers you have given me is %0.4f, and the average is %0.4f\n", sum,avg);
    return 0;
}
