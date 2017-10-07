#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int arr[10005] = {};
    for (int i = 1; i <= 10000; i++)
    {
        int sum = 0;
        for (int j = 1; j*j <= i; j++)
        {
            if (i%j == 0 && j*j != i)
                sum += j + (i / j);
            else if (j * j == i)
                sum += j;
        }
        if (sum - i == i)
            arr[i] = arr[i - 1] + 1;
        else
            arr[i] = arr[i - 1];
    }
    int n, m, t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        if (n > m)
            swap(n, m);
        cout << arr[m]-arr[n-1] << endl;
    }
}