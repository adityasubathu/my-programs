#include<iostream.h>
void main()
{
	void swap(int,int);
	int a,b;
	cout<<"Enter 1st number:- ";
	cin>>a;
	cout<<"\nEnter 2nd Number:- ";
	cin>>b;
	swap(a,b);
	cout<<a<<' '<<b;
}
void swap(int x,int y)
{
	int c;
	c=x;
	x=y;
	y=c;
	cout<<x<<' '<<y<<"\n";
}
