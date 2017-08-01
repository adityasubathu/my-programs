#include<iostream.h>
void main()
{
	int a,b,c;
	cout<<"Enter the 1st number:- ";
	cin>>a;
	cout<<endl;
	cout<<"Enter 2nd Number:- ";
	cin>>b;
	cout<<endl;
	cout<<"Enter 3rd number:- ";
	cin>>c;
	cout<<endl;
	if(a>b)
	{
		if(a>c)
		{
			cout<<a<<" "<<" is greater ";
			cout<<endl;
		}
		else
		{
			cout<<c<<" "<<" is greater ";
			cout<<endl;
		}
	}
	else
	{
		if(b>c)
		{
			cout<<b<<" "<<" is greater ";
			cout<<endl;
		}
		else
		{
			cout<<c<<" "<<" is greater ";
		}
	}
cout<<"...........Thankyou............";
cout<<endl;
}
