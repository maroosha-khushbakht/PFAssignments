#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n - 1);

    for (int& i : a)
        cin >> i;

    for (int& i : b)
        cin >> i;

    int sum1 = 0, sum2 = 0;

    for (int i : a)
        sum1 += i;

    for (int i : b)
        sum2 += i;

    cout << "Missing: " << sum1 - sum2;

    return 0;
}
