#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float x, y;
	cout << "Enter two numbers: ";
	cin >> x >> y;


	cout << fixed << showpoint << setprecision(3);

	float sum = x + y;
	cout << "Sum: " << sum << endl;

	if (x > y)
		cout << "Difference: " << x - y << endl;
	else
		cout << "Difference: " << y - x << endl;

	float product = x * y;
	cout << "Product: " << product << endl;

	if (x > y)
		cout << "Quotient: " << x / y << endl;
	else
		cout << "Quotient: " << y / x << endl;


	// After type casting to int, from here on out each operation is done on integers, due to which the answers will have no decimal pts.

	int a = (int)x, b = (int)y;
	cout << "\nAfter type casting to int:\n";
	int sum2 = a + b;
	cout << "Sum: " << sum2 << endl;


	if (a > b)
		cout << "Difference: " << a - b << endl;
	else
		cout << "Difference: " << b - a << endl;

	int product2 = a * b;
	cout << "Product: " << product2 << endl;

	if (a > b)
		cout << "Quotient: " << a / b << endl;
	else
		cout << "Quotient: " << b / a << endl;


	return 0;
}