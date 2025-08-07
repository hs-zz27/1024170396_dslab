#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(v) / sizeof(int);
    int inversions = 0;
    for (int i = 0; i < n; i++)
    {
        int current = v[i];
        for (int j = i + 1; j < n; j++)
        {
            if (current > v[j])
            {
                inversions++;
            }
        }
    }
    cout << inversions;
}