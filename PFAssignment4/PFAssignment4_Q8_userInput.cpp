#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> v;

	for (int i : v)
		cin >> i;

	for (int i : v)
		cout << i;

	return 0;
}
