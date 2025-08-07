#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rows;
    cin >> rows;

    int v[rows][3], v2[rows][3];

    for (int i = 0; i < rows; i++)
    {
        cin >> v[i][0] >> v[i][1] >> v[i][2];
    }

    for (int i = 0; i < rows; i++)
    {
        cin >> v2[i][0] >> v2[i][1] >> v2[i][2];
    }

    // 6(a): Transpose v
    for (int i = 0; i < rows; i++)
    {
        swap(v[i][0], v[i][1]);
    }

    // 6(b): Add v and v2
    int addedTriplet[100][3];
    int k = 0;
    for (int i = 0; i < rows; i++)
    {
        bool matched = false;
        for (int j = 0; j < rows; j++)
        {
            if (v[i][0] == v2[j][0] && v[i][1] == v2[j][1])
            {
                addedTriplet[k][0] = v[i][0];
                addedTriplet[k][1] = v[i][1];
                addedTriplet[k][2] = v[i][2] + v2[j][2];
                matched = true;
                break;
            }
        }
        if (!matched)
        {
            addedTriplet[k][0] = v[i][0];
            addedTriplet[k][1] = v[i][1];
            addedTriplet[k][2] = v[i][2];
        }
        k++;
    }
    for (int i = 0; i < rows; i++)
    {
        bool exists = false;
        for (int j = 0; j < rows; j++)
        {
            if (v2[i][0] == v[j][0] && v2[i][1] == v[j][1])
            {
                exists = true;
                break;
            }
        }
        if (!exists)
        {
            addedTriplet[k][0] = v2[i][0];
            addedTriplet[k][1] = v2[i][1];
            addedTriplet[k][2] = v2[i][2];
            k++;
        }
    }

    cout << "\nAdded Triplet Matrix:\n";
    for (int i = 0; i < k; i++)
    {
        cout << addedTriplet[i][0] << " " << addedTriplet[i][1] << " " << addedTriplet[i][2] << '\n';
    }

    // 6(c): Multiplication
    // Assuming square matrix of size
    int multipliedTriplets[100][3];
    int mulSize = 0;
    for (int i = 0; i < rows; i++)
    {
        int row1 = v[i][0];
        int col1 = v[i][1];
        int val1 = v[i][2];

        for (int j = 0; j < rows; j++)
        {
            int row2 = v2[j][0];
            int col2 = v2[j][1];
            int val2 = v2[j][2];

            if (col1 == row2)
            {
                int resRow = row1;
                int resCol = col2;
                int resVal = val1 * val2;

                bool found = false;
                for (int k = 0; k < mulSize; k++)
                {
                    if (multipliedTriplets[k][0] == resRow && multipliedTriplets[k][1] == resCol)
                    {
                        multipliedTriplets[k][2] += resVal;
                        found = true;
                        break;
                    }
                }
                if (!found)
                {
                    multipliedTriplets[mulSize][0] = resRow;
                    multipliedTriplets[mulSize][1] = resCol;
                    multipliedTriplets[mulSize][2] = resVal;
                    mulSize++;
                }
            }
        }
    }

    return 0;
}
