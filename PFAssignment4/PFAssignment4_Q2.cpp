#include <iostream>
using namespace std;
void input(int a[5][7])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            cin >> a[i][j];
        }
    }
}

void total(int a[5][7], int t[5])
{
    for (int i = 0; i < 5; i++)
    {
        int sum = 0;
        for (int j = 0; j < 7; j++)
        {
            sum += a[i][j];
        }
        t[i] = sum;
    }
}

void maxProduct(int t[5])
{
    int max = t[0];
    int p = 0;

    for (int i = 1; i < 5; i++)
    {
        if (t[i] > max)
        {
            max = t[i];
            p = i;
        }
    }

    cout << "Max product: " << p + 1 << endl;
}

void bestDay(int a[5][7])
{
    int d = 0;
    int max = 0;

    for (int j = 0; j < 7; j++)
    {
        int sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum += a[i][j];
        }

        if (sum > max)
        {
            max = sum;
            d = j;
        }
    }

    cout << "Best day: " << d + 1 << endl;
}

int main()
{
    int a[5][7];
    int t[5];

    input(a);
    total(a, t);
    maxProduct(t);
    bestDay(a);

    return 0;
}