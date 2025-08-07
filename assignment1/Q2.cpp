#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v[] = {64, 34, 25, 12, 22, 11, 90, 64, 34, 12, 11, 1, 2, 33};
    int n = sizeof(v) / sizeof(int);
    int inversions = 0;
    int unique[n];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        bool found = false;
        for (int j = 0; j < k; j++)
        {
            if (unique[j] == v[i])
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            unique[k++] = v[i];
        }
    }
}