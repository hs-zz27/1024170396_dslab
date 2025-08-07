#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v[] = {1, 2, 4, 5, 6, 7, 8};
    int n = sizeof(v) / sizeof(int);
    int start = v[0];
    for (int i = 0; i < n; i++)
    {
        if (start + i != v[i])
        {
            cout << "MISSING ELEMENT IS " << start + i << endl;
            break;
        }
    }
}