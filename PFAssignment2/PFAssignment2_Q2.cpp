#include <iostream>
using namespace std;
void reverseArray(int (&arr)[6], int n)
{
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    int arr[6] = { 3, 2, 4, 1, 4, 6 };
    int n = 6;

    reverseArray(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
