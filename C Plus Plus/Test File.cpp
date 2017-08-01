#include<iostream.h>
// returns the value nBase ^ nExp
int SumTo(int a)
{
    for(int i=1; i<=a; i++)
        cout << i+i+1;
    return 0;
}

int main(int nBase, int nExp)
{
    cout<< "Enter The Integer: ";
    cin<< int x;
    cout<<SumTo(x);
    return 0;
}
