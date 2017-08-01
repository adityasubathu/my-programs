#include<iostream>

using namespace std;

int partition(int a[], int beg, int end)
{

	int p = beg, pivot = a[beg], loc;

	for (loc = beg + 1; loc <= end; loc++)
	{
		if (pivot>a[loc])
		{
			a[p] = a[loc];
			a[loc] = a[p + 1];
			a[p + 1] = pivot;
			p = p + 1;
		}
	}
	return p;
}
void quicksort(int a[], int beg, int end)
{
	if (beg<end)
	{
		int p = partition(a, beg, end);
		quicksort(a, beg, p - 1);
		quicksort(a, p + 1, end);
	}
}

int main()
{

	int a[60], i, n, beg, end;
	cout << "Enter the number of entries: ";
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		if(i==1)
        {
            cout<<"Enter the 1st number: ";
        }
        else if(i==2)
        {
            cout<<"Enter the 2nd number: ";
        }
        else if(i==3)
        {
            cout<<"Enter the 3rd number: ";
        }
        else
        {

            cout << "Enter the " << i << "th number: ";
        }
		cin >> a[i];
	}
	beg = 1;
	end = n;

	quicksort(a, beg, end);
	cout << "After sorting: " << endl;

	for (i = 1; i <= n; i++)
	{
		cout << a[i] << "\t";
	}
	cout << endl;

	return 0;
}
