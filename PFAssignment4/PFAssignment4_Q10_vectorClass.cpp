#include <iostream>
using namespace std;

class myVector
{
    int* a;
    int s;

public:
    myVector()
    {
        a = new int[100];
        s = 0;
    }

    void push_back(int x)
    {
        a[s] = x;
        s++;
    }

    void pop_back()
    {
        if (s > 0)
            s--;
    }

    int size()
    {
        return s;
    }

    int at(int i)
    {
        return a[i];
    }
};

int main()
{
    myVector v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    v.pop_back();

    for (int i = 0; i < v.size(); i++)
        cout << v.at(i) << " ";

    return 0;
}
