#include <iostream>
using namespace std;
void show(int a[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void reserve(int a[10][10])
{
    int r, c;
    cin >> r >> c;

    if (a[r][c] == 0)
    {
        a[r][c] = 1;
        cout << "Seat reserved";
    }
    else
    {
        cout << "Already reserved";
    }
}

void cancel(int a[10][10])
{
    int r, c;
    cin >> r >> c;

    if (a[r][c] == 1)
    {
        a[r][c] = 0;
        cout << "Reservation cancelled";
    }
    else
    {
        cout << "Seat already empty";
    }
}

void count(int a[10][10])
{
    int full = 0, empty = 0, partial = 0;

    for (int i = 0; i < 10; i++)
    {
        int c = 0;
        for (int j = 0; j < 10; j++)
        {
            if (a[i][j] == 1)
                c++;
        }

        if (c == 10)
            full++;
        else if (c == 0)
            empty++;
        else
            partial++;
    }

    cout << "Full rows: " << full << endl;
    cout << "Empty rows: " << empty << endl;
    cout << "Partial rows: " << partial << endl;
}

int main()
{
    int a[10][10] = {0};
    int ch;

    do
    {
        cout << "1. Show" << endl;
        cout << "2. Reserve" << endl;
        cout << "3. Cancel" << endl;
        cout << "4. Count" << endl;
        cout << "0. Exit" << endl;

        cin >> ch;

        if (ch == 1)
            show(a);
        else if (ch == 2)
            reserve(a);
        else if (ch == 3)
            cancel(a);
        else if (ch == 4)
            count(a);

    } while (ch != 0);

    return 0;
}