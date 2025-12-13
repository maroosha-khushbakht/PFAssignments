#include <iostream>
using namespace std;
void tempData(int arr[7][4])
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void highestAndLowest(int arr[7][4])
{
    int min = arr[0][0];
    int max = arr[0][0];

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] > max)
                max = arr[i][j];

            if (arr[i][j] < min)
                min = arr[i][j];
        }
    }

    cout << "Highest Temperature: " << max << endl;
    cout << "Lowest Temperature: " << min << endl;
}

void avg(int arr[7][4], double avgArr[7])
{
    for (int i = 0; i < 7; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
        avgArr[i] = sum / 4.0;
    }
}

void display(int arr[7][4], double avgArr[7])
{
    for (int i = 0; i < 7; i++)
    {
        cout << "Day " << i + 1 << ": ";
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << " Avg: " << avgArr[i] << endl;
    }
}

int main()
{
    int arr[7][4];
    double avgArr[7];

    tempData(arr);
    highestAndLowest(arr);
    avg(arr, avgArr);
    display(arr, avgArr);

    return 0;
}