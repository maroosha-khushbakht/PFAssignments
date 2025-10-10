#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int x, y;
	cout << "Enter first number: ";
	cin >> x;

	cout << "Enter second number: ";
	cin >> y;

	x = x + y;
	y = x - y;
	x = x - y;

	cout << "After swapping, first number: " << x << ", second number: " << y << endl;
	return 0;
}