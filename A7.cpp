#include<iostream>

using namespace std;

void In(char a[], int n)
{
    for(int i = 1; i <= n; i++)
    cout << a[i];
    cout << endl;
}

void swap(char a[], int m, int n)
{
    int tmp = a[m];
    a[m] = a[n];
    a[n] = tmp;
}

void HoanVi(char a[], int low, int high, int n)
{
    if(low == high)
    {
        In(a, n); return;
    }
    for(int i = low;i <= high; i++)
    {
        swap(a, low, i);
        HoanVi(a, low+1, high, n);
        swap(a, low, i);
    }
}
int main()
{
    int n;
    cin >> n;
    char a[n];
    for(int i = 1;i <= n; i++)
    {
        cin >> a[i];
    }
    HoanVi(a, 1, n, n);
    return 0;
}
