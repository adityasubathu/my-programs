#include<iostream.h>
#include<conio.h>

void main()
{
	int ar[10],i,a,flag=0,pos;
	for(i=0;i<=9;i++)
	{
		cout<<"\nEnter the "<<i+1<<" element :- ";
		cin>>ar[i];
	}
	cout<<"\nNow showing the results......";
	for(i=0;i<=9;i++)
	{
		cout<<"\nThe "<<i+1<<" Element is:- "<<ar[i];
	}
cout<<"\nEnter which element you want to search:- ";
cin>>a;
for(i=0;i<=9;i++)
	if(ar[i]==a)
	{
		flag=1;
		pos=i;
		break;
	}
	if(flag==0)
		cout<<"\nElement Not Fornd!!!";
	else
		cout<<"\nElement Found at Position:- "<<pos+1;
}
