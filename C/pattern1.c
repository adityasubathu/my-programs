#include<stdio.h>

int main()
{
    int a,b;
    for (a=1;a<=4;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("*");
        }

        printf("%d",a);
        printf("\n");
    }
    return 0;
    getch();
}
