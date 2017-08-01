#include<iostream.h>
void main()
{
	int add(int,int);
	int a,b,c;
	cout<<"Enter 1st number:- ";
	cin>>a;
	cout<<"\nEnter 2nd Number:- ";
	cin>>b;
	c=add(a,b);
	cout<<"\nAddition:- "<<c;
}
int add(int a,int b)
{
	int n;
	n=a+b;
	return n;
}
