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

    bool f = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] == v[j])
            {
                f = true;
                break;
            }
        }
    }

    if (f)
        cout << "Duplicates found";
    else
        cout << "No duplicates";

    return 0;
}
