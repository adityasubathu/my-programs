#include<iostream.h>
void main()
{
	int n;
	float a,b,c;
	cout<<" Enter two numbers ";
	cout<<'\n'<<" Enter 1st number:- ";
	cin>>a;
	cout<<'\n'<<" Enter 2nd Number:- ";
	cin>>b;
	cout<<'\n';
	cout<<" 1 for addition..";
	cout<<'\n'<<" 2 for subratction..";
	cout<<'\n'<<" 3 for multiplication..";
	cout<<'\n'<<" 4 for Division..";
	cout<<'\n'<<"Enter your Choice :- ";
	cin>>n;
	cout<<endl;
	switch(n)
	{
		case 1:
			{
				c=a+b;
				cout<<" Result:- "<<c;
				break ;
			}
		case 2:
			{
				if(a>b)
				{
					c=a-b;
				}
				else
				{
					c=b-a;
				}
				cout<<" Result :- "<<c;
				break ;
			}
		case 3:
		{
			c=a*b;
			cout<<" Result:- "<<c;
			break ;
		}
		case 4:
		{
			c=a/b;
			cout<<" Result:- "<<c;
			break ;
		}
		default : 
		{
			cout<<" Number entered is not correct"<<endl;
		}
	}
}
