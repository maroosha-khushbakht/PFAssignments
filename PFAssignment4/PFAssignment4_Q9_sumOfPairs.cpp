#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int& i : v)
        cin >> i;

    int x;
    cin >> x;

    int c = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] + v[j] == x)
                c++;
        }
    }

    cout << c;

    return 0;
}
