#include<stdio.h>

int main()
{
    int a,b,c,d,e;
    for (a=0; a<5; a++)
    {
        for (b=0;b<a;b++)
        {
            printf(" ");
        }
        printf("*");
        for (c=0; c<a-1; c++)
        {
            printf(" ");
        }
        printf("\n");
    }


    return 0;
    system("pause");
}
