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

    for (int i : v)
    {
        if (i == x)
            c++;
    }

    cout << c;

    return 0;
}
