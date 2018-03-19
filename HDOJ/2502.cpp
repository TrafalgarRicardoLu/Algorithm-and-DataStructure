#include<iostream>
using namespace std;
int main()
{
    int t, n;
    int a[25];
    int sum = 0, p = 1;
    for (int i = 1; i<25; i++)
    {
        a[i] = sum + p;
        sum += a[i];
        p *= 2;
    }
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << a[n] << endl;
    }
    return 0;
}