#include<iostream>

using namespace std;

int dequy(int n)
{
    int arr[1000];
    if(n == 0) return 0;
    return dequy(n-1);
}

int main()
{
    int n;
    cin >> n;
    dequy(n);

    return 0;
}
//khi n = 517 thi gap loi
