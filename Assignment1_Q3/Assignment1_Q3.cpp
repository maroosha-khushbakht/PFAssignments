#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n1, n2, n3;
	cout << "Enter three numbers: ";
	cin >> n1 >> n2 >> n3;
	
	if (n1 >= n2 && n1 >= n3)
	{
		cout << "largest number: " << n1  << endl;
	}
	else if (n2 >= n1 && n2 >= n3)
	{
		cout << "largest number: " << n2  << endl;
	}
	else
	{
		cout << "largest number: " << n3 << endl;
	}

	if (n1 <= n2 && n1 <= n3)
	{
		cout << "smallest number: " << n1 << endl;
	}
	else if (n2 <= n1 && n2 <= n3)
	{
		cout << "smallest number: " << n2 << endl;
	}
	else
	{
		cout << "smallest number: " << n3 << endl;
	}

	if (n1 == n2 && n1 == n3 && n2 == n3)
	{
		cout << "All numbers are equal." << endl;
	}
	else
	{
		cout << "All three numbers are not equal." << endl;
	}
	return 0;
}