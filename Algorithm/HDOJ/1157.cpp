#include<iostream>
#include<algorithm>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        long arr[10005] = {};
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        cout << arr[n / 2] << endl;
    }
}