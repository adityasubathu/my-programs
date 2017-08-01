#include<iostream.h>
void main()
{
	int fact(int);
	int a,b;
	cout<<"Enter a number to find it's factorial:- ";
	cin>>a;
	b=fact(a);
	cout<<"\nFactorial is:- "<<b;
}
int fact(int a)
{
	int c;
	if(a==0)
	return 1;
	else 
	{
		c=a*fact(a-1);
	}
	return c;
}
