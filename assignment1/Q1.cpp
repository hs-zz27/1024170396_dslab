#include <iostream>
using namespace std;

void create(int v[], int &n)
{
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> v[i];
}

void display(int v[], int n)
{
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;
}

void insert(int v[], int &n)
{
    int pos, val;
    cout << "Enter position and value to insert: ";
    cin >> pos >> val;
    if (pos < 0 || pos > n || n >= 100)
        return;
    for (int i = n; i > pos; i--)
        v[i] = v[i - 1];
    v[pos] = val;
    n++;
}

void remove(int v[], int &n)
{
    int pos;
    cout << "Enter position to delete: ";
    cin >> pos;
    if (pos < 0 || pos >= n)
        return;
    for (int i = pos; i < n - 1; i++)
        v[i] = v[i + 1];
    n--;
}

void linearSearch(int v[], int n)
{
    int key;
    cout << "Enter element to search: ";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == key)
        {
            cout << "Found at index " << i << endl;
            break;
        }
    }
}

int main()
{
    int v[100], n = 0, choice;
    while (true)
    {
        cout << "1.Create 2.Display 3.Insert 4.Delete 5.Search 6.Exit\n";
        cin >> choice;
        if (choice == 1)
            create(v, n);
        else if (choice == 2)
            display(v, n);
        else if (choice == 3)
            insert(v, n);
        else if (choice == 4)
            remove(v, n);
        else if (choice == 5)
            linearSearch(v, n);
        else if (choice == 6)
            break;
    }
    return 0;
}
