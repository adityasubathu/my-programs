#include<iostream>
#include<conio.h>


void main()
{
	using namespace std;
	char d;
	do
	{
		int a, b, c;
		cout << "Enter the numbers: ";
		cin >> a >> b;
		cout << "Press 1 for addition." << endl;
		cout << "Press 2 for subtraction." << endl;
		cout << "Press 3 for multiplication." << endl;
		cout << "Press 4 for division." << endl;
		cout << " " << endl;
		cout << "Enter Your Choice: ";
		cin >> c;

		switch (c)
		{
		case 1:
			cout << "Addition of the numbers is " << a + b << endl;
			break;

		case 2:
			cout << "Subtraction of the numbers is " << a - b << endl;
			break;

		case 3:
			cout << "Multiplication of the numbers is " << a*b << endl;
			break;

		case 4:
			cout << "Division of the numbers is " << a / b << endl;
			break;

		default:
			cout << "Not a valid input." << endl;
			cout << " " << endl;
		}
		cout << "Restart the program? (y/n) ";
		cin >> d;
		cout << " " << endl;
	}

	while (d == 'y');
}
