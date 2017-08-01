#include<stdio.h>

int main()
    {
        int i,j,k;

        for(i=1;i<=4;i++)
        {
            for(j=4;j>=(i-1)*2-1;j--)
            {
                printf(" ");
            }
            printf("*");

            for(j=2;j<=(i-1)*4;j++)
            {
                printf(" ");
            }

            if(i>1)
            {
            printf("*");
            }
            printf("\n");
        }
        for(i=3;i>=1;i--)
        {
            for(j=4;j>=(i-1)*2-1;j--)
            {
                printf(" ");
            }
            printf("*");

            for(j=2;j<=(i-1)*4;j++)
            {
                printf(" ");
            }

            if(i>1)
            {
                printf("*");
            }
                printf("\n");
        }
      return 0;
    }
