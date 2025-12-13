#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int a[20][20];
    int arr[400];
    int k = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            arr[k++] = a[i][j];
        }

    for (int i = 0; i < k - 1; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    k = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = arr[k++];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    return 0;
}
