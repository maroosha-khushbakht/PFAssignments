#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;

    int a[20][20];
    int b[20][20];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            b[i][j] = a[j][c - 1 - i];
        }
    }

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
            cout << b[i][j] << " ";
        cout << endl;
    }

    return 0;
}
