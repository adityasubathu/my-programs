#include<iostream.h>
void main()
{
	int n,s=1;
	cout<<"Enter the no of which you want to find factorial:- ";
	cin>>n;
	while(n>0)
	{
		s=s*n;
		n--;
	}
	cout<<"\nFactorial :- "<<s;
}	
