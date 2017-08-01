#include<iostream.h>
void main()
{
	int a[3][3],b[3][3];
	int i,j;
	cout<<"For Matrix A ...";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"\nEnter the "<<i<<" "<<j<<" Element:- ";
			cin>>a[i][j];
		}
	}
	cout<<"\nThe Matrix A.."<<"\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<"  ";
		}
		cout<<"\n";
	}
	cout<<"\nTransposing the Elements...";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			b[i][j]=a[j][i];
		}
	}
	cout<<"\nAfter trnsposing the Elements Matrix is.."<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<b[i][j]<<"  ";
		}
		cout<<"\n";
	}
}
