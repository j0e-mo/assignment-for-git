#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ID, pass, i=1, correct_ID=1234,correct_pass=5678;

    printf("Enter your ID: \n");
    scanf("%d",&ID);

    if(ID!=correct_ID)
    {
      printf("ACCESS DENIED.\n");
    }

    while(ID==correct_ID && i<4)
        {
         printf("Enter your password: \n");
         scanf("%d",&pass);

            if(pass==correct_pass)
               {
                 printf("Welcome aboard, Captain.\n");
                 break;
               }
            else if(pass!=correct_pass)
            {
                printf("ACCESS DENIED.\n");
            }
         i++;
        }

    return 0;
}
