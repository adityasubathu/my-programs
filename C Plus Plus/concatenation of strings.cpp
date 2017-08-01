#include<iostream.h>
void main()
{
	char st1[50],st2[50],st3[150];
	int i,j,m=0,n=0;

	cout<<"Enter 1st String:- ";
	cin>>st1;

	for(i=0;st1[i]!='\0';i++)
    {
        m=m+1;
    }
	cout<<"\nEnter 2nd String:- ";
	cin>>st2;

	for(i=0;st2[i]!='\0';i++)
    {
        n=n+1;
    }

	cout<<"\nLength of First String is:- "<<m;
	cout<<"\nLength of second String is:- "<<n;

	for(i=0;st1[i]!='\0';i++)
    {
        st3[i]=st1[i];
    }
    for(j=0;st2[j]!='\0';j++)
    {
        st3[i+j]=st2[j];
    }

	cout<<"\nThe concatenated string is:- ";
	cout<<st3;
}
