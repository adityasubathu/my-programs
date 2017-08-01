#include<iostream>
using namespace std;
void main()
{
	int a[3][3],b[3][3],c[3][3];
	int i,j,n;
	cout<<"Elements for 1st Matrix...";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"\nEnter "<<i<<' '<<j<<" Element:- ";
			cin>>a[i][j];
		}
	}
	cout<<"\nNow Elements for 2nd Matrix:- ";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"\nEnter "<<i<<' '<<j<<" Element:- ";
			cin>>b[i][j];
		}
	}
	cout<<"\nEnter 1 for Addition..";
	cout<<"\nEnter 2 for Subtraction..";
	cout<<"\nEnter 3 for Division..";
	cout<<"\nEnter 4 for Multiplication..";
	cout<<"\nEnter your choice:- ";
	cin>>n;
	switch(n)
	{
		case 1:
		{
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					c[i][j]=a[i][j]+b[i][j];
				}
			}
			break;
		}
		case 2:
		{
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					c[i][j]=a[i][j]-b[i][j];
				}
			}
			break;
		}
		case 3:
		{
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					c[i][j]=a[i][j]/b[i][j];
				}
			}
			break;
		}
		case 4:
		{
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					c[i][j]=0;
					for(int k=0;k<3;k++)
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
			}
			break;
		}
		default :
			{
				cout<<"\nInvalid Choice...";
			}
	}
	if(n==1||n==2||n==3||n==4)
	{
		cout<<"\nShowing Results...";
		cout<<"\nThe Matrix is:- "<<"\n";
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<" "<<c[i][j];
			}
			cout<<"\n";
		}
	}
	else
		cout<<"\nNo results to show...";
}

