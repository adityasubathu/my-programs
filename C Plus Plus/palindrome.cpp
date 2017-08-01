#include<iostream.h>
void main()
{
	int a,b,rev=0,c;
	cout<<"Enter A number to find it's pallindrom or not:- ";
	cin>>a;
	c=a;
	do
	{
		b=a%10;
		rev=(rev*10)+b;
		a=a/10;
	}while(a!=0);
	cout<<rev;
	if(c==rev)
	cout<<"\nNumber is pallindrome";
	else
	cout<<"\nNumber is Not a pallindrome";
}
