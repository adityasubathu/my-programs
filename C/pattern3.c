#include<stdio.h>

int main()
{
    int a,b;
    for (a=4;a>=1;a--)
    {
        printf("%d", a);
        for (b=0;b<a;b++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
    getch();
}
