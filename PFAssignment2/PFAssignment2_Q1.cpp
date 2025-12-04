#include <iostream>
using namespace std;
int main() 
{
	int r, c;
	cout << "Enter number of rows: ";
	cin >> r;
	cout << "Enter number of columns: ";
	cin >> c;
	char arr[100][100];

	for (int i = 0; i < c; i++) 
	{
		for (int j = 0; j < r; j++) 
		{
			arr[i][j] = 'F';
			cout << "(" << i + 1 << " - " << j + 1 << " " << arr[i][j] << ") ";
		}
		cout << endl;
	}
	int cc, rc;
	cc = rc = 0;

	
	do {
		cout << "Enter row of the seat number you want to reserve: ";
		cin >> rc;
		cout << "Enter column of the seat number you want to reserve: ";
		cin >> cc;
		arr[rc-1][cc-1] = 'R';
		cout << "Updated Seat Reservation Status: " << endl;
		if (cc<=c && rc<= r && arr[rc - 1][cc - 1] == 'R') 
		{
			cout << "Seat (" << rc << " - " << cc << ") is successfully reserved." << endl;
		}
		else if (arr[rc - 1][cc - 1] == 'F')
		{
			cout << "Seat (" << rc << " - " << cc << ") is already reserved." << endl;
		}
		else if (cc != 0 && rc != 0)
		{
			cout << "Invalid Seat Number." << endl;
		}
		for (int i = 0; i < c; i++)
		{
			for (int j = 0; j < r; j++)
			{
				cout << "(" << i + 1 << " - " << j + 1 << " " << arr[i][j] << ") ";
			}
			cout << endl;
		}
	} while (cc != 0 && rc != 0);
	return 0;

}
