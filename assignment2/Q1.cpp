#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v[] = {3, 7, 14, 19, 25, 31, 42, 56, 68, 77};
    int n = sizeof(v) / sizeof(int);
    int target;
    cin >> target;
    int low = 0, high = n;
    while (high >= low)
    {
        int mid = (low + high) / 2;
        if (v[mid] == target)
        {
            cout << "ELEMENT FOUND AT INDEX" << ' ' << mid;
            break;
        }
        else if (v[mid] < target)
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
}