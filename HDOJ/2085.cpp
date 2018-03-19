#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    long long a[35], b[35]; a[0] = 1, b[0] = 0; a[1] = 3; b[1] = 1;
    for (int i = 2; i < 35; i++)
    {
        a[i] = a[i - 1] * 3 + b[i - 1] * 2;
        b[i] = a[i - 1] + b[i - 1];
    }
    while (cin >> n&&n!=-1)
    {
        cout << a[n] <<", "<< b[n] << endl;
    }
}