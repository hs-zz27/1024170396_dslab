#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v[] = {64, 34, 25, 12, 22, 11, 90, 64, 34, 12, 11, 1, 2, 33};
    int n = sizeof(v) / sizeof(int);

    // reverse (a)
    for (int i = 0; i < n / 2; i++)
    {
        swap(v[i], v[n - 1 - i]);
    }

    int arr[100][100], arr2[100][100], result[100][100], transpose[100][100];
    int n;
    cin >> n;
    // matrix multiplication (b)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr2[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                result[i][j] += arr[i][k] * arr2[k][j];
            }
        }
    }
    // matrix transpose (c)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }
}