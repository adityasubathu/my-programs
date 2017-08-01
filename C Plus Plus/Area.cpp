/*program for calculating area of rectangle, triangle, circle, square*/
#include<iostream>
using namespace std;

int main()
{
	int a, b, c, h, l, r, x;
	float area;
	cout << "Enter 1 for Rectangle." << endl;
	cout << "Enter 2 for triangle." << endl;
	cout << "Enter 3 for Square." << endl;
	cout << "Enter 4 for circle." << endl;
	cout << "Your choice: ";
	cin >> c;
	switch (c)
	{
	case 1:
		cout << "Enter the length and width of the rectangle: ";
		cin >> l >> b;
		area = l*b;
		break;
	case 2:
		cout << "Enter the base and height of triangle: ";
		cin >> b >> h;
		x = b*h;
		area = x / 2;
		break;
	case 3:
		cout << "Enter the side of the square: ";
		cin >> a;
		area = a*a;
		break;
	case 4:
		cout << "Enter the radius of the circle: ";
		cin >> r;
		area = 3.14f*r*r;
		break;
	default:
		cout << "Wrong choice. Recheck inputs.";
	}
	cout << "Your required area is: " << area << endl;
	return 0;
}
