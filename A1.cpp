#include<iostream>

using namespace std;

void f(int a[])
{
    cout << a << endl;
    cout << &a[0] << endl;
}

int main(){
    int a[] = {1, 56, 23, 765, 6, 7, 11, 22};
        cout << a << endl;
        cout << &a[0] << endl;
        f(a);
    return 0;
}
// cac dia chi deu bang nhau
