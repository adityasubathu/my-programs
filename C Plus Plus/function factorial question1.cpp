#include<iostream.h>
int factorial(int a)
{
	int i,b=1;
	for(i=a;i>=2;i--)
	{
		b=b*i;
	}
	return b;
}
void main()
{
	int a,b;
	int factorial(int);
	cout<<"Enter A number to find its factorial :-";
	cin>>a;
	b=factorial(a);
	cout<<endl<<"The factorial is :- "<<b<<endl;
}
