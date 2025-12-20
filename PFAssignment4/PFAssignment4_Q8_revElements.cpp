#include <iostream>
#include <vector>
using namespace std;

void rev(vector<int>& v)
{
    int n = v.size();

    for (int i = 0; i < n / 2; i++)
    {
        int t = v[i];
        v[i] = v[n - 1 - i];
        v[n - 1 - i] = t;
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int& i : v)
        cin >> i;

    rev(v);

    for (int i : v)
        cout << i << " ";

    return 0;
}
