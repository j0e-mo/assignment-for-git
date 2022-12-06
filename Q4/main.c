#include <stdio.h>
#include <stdlib.h>

int main()
{   int grade;

    printf("What's your grade?\n");
    scanf("%d",&grade);

    if(grade < 0 || grade > 100){
        printf("Too big brain, but kindly enter a valid grade!\n");}
    else if(grade <= 100 && grade >= 90){
        printf("Excellent. Great job!\n");}
    else if(grade < 90 && grade >= 80){
        printf("Very good. You have so much potential!\n");}
    else if(grade <80 && grade >= 70){
        printf("Good. Keep up the good work!\n");}
    else if(grade < 70 && grade >= 60){
        printf("Fair. You can do better but I'm proud nevertheless!\n");}
    else if(grade < 60){
        printf("Fail. It's okay, try and try and never stop trying!\n");}
    return 0;
}
