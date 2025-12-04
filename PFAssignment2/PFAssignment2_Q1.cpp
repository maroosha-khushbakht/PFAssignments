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
    
    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) 
        {
            arr[i][j] = 'F';
            cout << "(" << i + 1 << " - " << j + 1 << " " << arr[i][j] << ") ";
        }
        cout << endl;
    }

    int rc, cc;

    do {
        cout << "Enter row of the seat number you want to reserve: ";
        cin >> rc;
        cout << "Enter column of the seat number you want to reserve: ";
        cin >> cc;

        if (rc == 0 && cc == 0) 
            break;

        if (rc >= 1 && rc <= r && cc >= 1 && cc <= c) 
        {
            if (arr[rc - 1][cc - 1] == 'F') 
            {
                arr[rc - 1][cc - 1] = 'R';
                cout << "Seat (" << rc << " - " << cc << ") is successfully reserved." << endl;
            }
            else 
            {
                cout << "Seat (" << rc << " - " << cc << ") is already reserved." << endl;
            }
        }
        else 
        {
            cout << "Invalid Seat Number." << endl;
        }

        cout << "Updated Seat Reservation Status:" << endl;

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << "(" << i + 1 << " - " << j + 1 << " " << arr[i][j] << ") ";
            }
            cout << endl;
        }

    } while (rc != 0 && cc != 0);

    return 0;
}
