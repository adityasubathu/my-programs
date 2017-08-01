#include<iostream.h>
void main()
{
	char a;
	cout<<"Enter a number to find if it's number, special keywords, character, etc :- ";
	cin>>a;
	cout<<endl;
	if(a>=48 && a<=57)
	{
		cout<<".......Digit Entered........";
	}
	else if(a>=65 && a<=90)
	{
		cout<<".........Uppercase Letters.........";
	}
	else if(a>=97 && a<=122)
	{
		cout<<"........Lowercase Letters.........";
	}
	else
	{
		cout<<"......Special Character.......";
	}
}
