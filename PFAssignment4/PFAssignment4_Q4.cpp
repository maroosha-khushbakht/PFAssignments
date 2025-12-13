#include <iostream>
using namespace std;

void input(char grid[][20], int r, int c)
{
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> grid[i][j];
}

int cHor(char grid[][20], int r, int c)
{
    int count = 0;

    for (int i = 0; i < r; i++)
    {
        int l = 0;

        for (int j = 0; j < c; j++)
        {
            if (grid[i][j] != '#')
                l++;
            else
            {
                if (l >= 3) count++;
                l = 0;
            }
        }

        if (l >= 3) count++;
    }
    return count;
}


int cVer(char grid[][20], int r, int c)
{
    int count = 0;

    for (int j = 0; j < c; j++)
    {
        int l = 0;

        for (int i = 0; i < r; i++)
        {
            if (grid[i][j] != '#')
                l++;
            else
            {
                if (l >= 3) count++;
                l = 0;
            }
        }

        if (l >= 3) count++;
    }
    return count;
}

void longestWord(char grid[][20], int r, int c)
{
    char longest[50];
    int longestLen = 0;

    for (int i = 0; i < r; i++)
    {
        char w[50];
        int pos = 0;

        for (int j = 0; j < c; j++)
        {
            if (grid[i][j] != '#')
                w[pos++] = grid[i][j];
            else
            {
                if (pos >= 3 && pos > longestLen)
                {
                    longestLen = pos;
                    for (int k = 0; k < pos; k++)
                        longest[k] = w[k];
                }
                pos = 0;
            }
        }

        if (pos >= 3 && pos > longestLen)
        {
            longestLen = pos;
            for (int k = 0; k < pos; k++)
                longest[k] = w[k];
        }
    }

    for (int j = 0; j < c; j++)
    {
        char word[50];
        int pos = 0;

        for (int i = 0; i < r; i++)
        {
            if (grid[i][j] != '#')
                word[pos++] = grid[i][j];
            else
            {
                if (pos >= 3 && pos > longestLen)
                {
                    longestLen = pos;
                    for (int k = 0; k < pos; k++)
                        longest[k] = word[k];
                }
                pos = 0;
            }
        }

        if (pos >= 3 && pos > longestLen)
        {
            longestLen = pos;
            for (int k = 0; k < pos; k++)
                longest[k] = word[k];
        }
    }

    cout << "Longest word: ";
    for (int i = 0; i < longestLen; i++)
        cout << longest[i];
    cout << endl;
}


int main()
{
    int r, c;
    char grid[20][20];

    cin >> r >> c;
    input(grid, r, c);

    cout << "Horizontal words: " << cHor(grid, r, c) << endl;
    cout << "Vertical words: " << cVer(grid, r, c) << endl;

    longestWord(grid, r, c);

    return 0;
}
