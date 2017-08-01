#include<iostream.h>
void main()
{
	int cube(int);
	int a,c;
	cout<<"Enter a Number:- ";
	cin>>a;
	c=cube(a);
	cout<<"\nCube of the number:- "<<c;
}
int cube(int a)
{
	int c;
	c=a*a*a;
	return c;
}
