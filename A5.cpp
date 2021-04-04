#include<iostream>

using namespace std;

long long Fibo(int n)
{
   if (n == 0) return 0;
   if (n == 1) return 1;
   return Fibo(n-1) + Fibo(n-2);
}

int main()
{
    int n;
    cin >> n;
    cout << Fibo(n) << endl;// de quy
    long long fb = 0, f0 = 0, f1 = 1;
    if(n == 0 || n == 1)
    {
        fb = n;
        cout << fb;
        return 0;
    }
    for(int i = 2; i <= n; i++)
    {
        fb = f0+f1;
        f0 = f1;
        f1 = fb;
    }
    cout << fb << endl;// vong lap
    return 0;
    // dung de quy nhanh hon khi dung vong lap
}

