#include <bits/stdc++.h>

using namespace std;

int a[32000];

void add(int left, int right, int x)
{

    for(int i = left-1; i < right; i++)
        a[i] += x;
}

int main()
{
    int n;
    cout << endl << "Number of elements you want to enter:";
    cin >> n;

    for(int i = 0; i<n; i++)
        cin >> a[i];

    int left, right, x;

    cout << endl << "First position: ";
    cin >> left;
    cout << endl << "Last position: ";
    cin >> right;
    cout << endl << "Integer to be added = ";
    cin >> x;

    add(left, right, x);

    for(int i = 0; i<n; i++)
        cout << endl << a[i];

    return 0;
}
