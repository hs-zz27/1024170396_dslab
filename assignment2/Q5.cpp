#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    m = n;
    int v[100][100];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }

    // 5(a)
    int *diagonalMat = new int[n];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                diagonalMat[k++] = v[i][j];
            }
        }
    }

    // 5(b)
    int *middleDiag = new int[n];
    int *upperDiag = new int[n - 1];
    int *lowerDiag = new int[n - 1];
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                middleDiag[c++] = v[i][j];
            }
            else if (i - j == 1)
            {
                upperDiag[a++] = v[i][j];
            }
            else if (j - i == 1)
            {
                lowerDiag[b++] = v[i][j];
            }
        }
    }

    // 5(c)
    int total = n * (n + 1) / 2;
    int *lowerTriangularMat = new int[total];
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cin >> lowerTriangularMat[index++];
        }
    }
    index = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j > i)
                cout << "0 ";
            else
                cout << lowerTriangularMat[(i * (i + 1)) / 2 + j] << " ";
        }
        cout << '\n';
    }

    delete[] lowerTriangularMat;

    // 5(d)
    total = n * (n + 1) / 2;
    int *upperTriangularMat = new int[total];
    index = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cin >> upperTriangularMat[index++];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j < i)
                cout << "0 ";
            else
                cout << upperTriangularMat[(i * n) - (i * (i - 1)) / 2 + (j - i)] << " ";
        }
        cout << '\n';
    }

    delete[] upperTriangularMat;

    // 5(e)

    total = n * (n + 1) / 2;
    int *symmetricMat = new int[total];
    index = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cin >> symmetricMat[index++];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= j)
                cout << symmetricMat[(i * (i + 1)) / 2 + j] << " ";
            else
                cout << symmetricMat[(j * (j + 1)) / 2 + i] << " ";
        }
        cout << '\n';
    }
    delete[] symmetricMat;
}