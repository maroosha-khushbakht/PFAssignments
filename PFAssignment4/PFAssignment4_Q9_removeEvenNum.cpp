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

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] % 2 == 0)
        {
            v.erase(v.begin() + i);
            i--;
        }
    }

    for (int i : v)
        cout << i << " ";

    return 0;
}
