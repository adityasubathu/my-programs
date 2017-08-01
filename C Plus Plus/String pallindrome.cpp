#include<iostream.h>
void main()
{
	char st[20];
	int i,j,n=0,flag=0;
	cout<<"Enter a String to check whether it's palindrome or not:- ";
	cin>>st;
	for(i=0;st[i]!='\0';i++)
	n=n+1;
	cout<<"\nThe no of characters are:- "<<n;
	for(i=0,j=n-1;i<n/2;i++,j--)
	{
		if(st[i]!=st[j])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		cout<<"\nString is Palindrome...";
	else
		cout<<"\nString is not Palindrome...";
}
