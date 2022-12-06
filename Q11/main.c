#include<stdio.h>
#include<conio.h>
int main()
{
int  rows, empty , i, stars;

  printf("Enter number of rows: ");
  scanf("%d",&rows);

     for(i = 1; i <= rows; i++)
     {

        for(empty = i; empty < rows; empty++)
        {
            printf(" ");
        }

        for(stars = 1; stars <= (2 * i - 1); stars++)
        {
            printf("*");
        }

      printf("\n");
}
  return 0;
}
