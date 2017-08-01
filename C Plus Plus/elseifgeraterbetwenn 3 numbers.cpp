#include<iostream.h>
void main()
{
	int a,b,c;
	cout<<"Enter three numbers to find the greatest between three numbers......";
	cout<<'\n'<<"Enter 1st Number:- ";
	cin>>a;
	cout<<'\n'<<"Enter 2nd Number:- ";
	cin>>b;
	cout<<'\n'<<"Enter 3rd Number:- ";
	cin>>c;
	if(a>b && a>c)
	{
		cout<<'\n'<<" "<<a<<" Is greatest ";
		cout<<endl;
	}
	else if(b>c)
	{
		cout<<" "<<b<<" Is greatest "<<endl;
	}
	else
	{
		cout<<" "<<c<<" Is greater "<<endl;
	}
	cout<<"...........Thankyou...........";
	cout<<endl;
}
