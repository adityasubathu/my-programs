#include<iostream.h>
void main()
{
	char b='y';
	do
	{
		cout<<"...WELCOME TO CGC...";
		cout<<'\n'<<"Want to print one more time";
		cout<<"\n Type 'y' or 'Y' for Yes";
		cout<<"\n Type 'n' or 'N' for No";
		cout<<"\n Type:- ";
		cin>>b;
		cout<<endl<<endl<<endl;
	}while(b == 'y'|| b== 'Y');
cout<<"\n..........Thankyou........";
}
