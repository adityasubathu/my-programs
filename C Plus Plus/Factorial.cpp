#include<iostream>
/*Data Structures experiment.*/
using namespace std;
int main()
{
	int a,fact=1;
	cout << "Enter the number: ";
	cin >> a;
	
	for (int i = 1; i<=a; i++)
	{
		fact = fact*i;
	}
	cout << fact << endl;
	return 0;
}
