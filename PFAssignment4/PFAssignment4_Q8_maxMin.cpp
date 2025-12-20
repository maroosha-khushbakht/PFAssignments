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

    int min = v[0];
    int max = v[0];

    for (int i : v)
    {
        if (i > max)
            max = i;

        if (i < min)
            min = i;
    }

    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;

    return 0;
}
