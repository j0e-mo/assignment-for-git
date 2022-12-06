#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i;

    printf("Ay bro, what's 3 x 4?\n");
    for(i=0; ;i++)
        {
        scanf("%d",&x);
      if(x!=12)
        printf("Nah, try one more time\n");
      else {
        printf("You goddamn right it's 12\n");
        break;
        }
        }
    return 0;
}
