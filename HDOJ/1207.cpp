#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    unsigned long long arr[100] = {}, m;
    arr[0] = 0; arr[1] = 1; arr[2] = 3;
    while (cin >> n)
    {
        for (int i = 3; i <= n; i++)
        {
             m = 1000000086;
            for (int j = 1; j < i; j++)
                m = min(m, arr[j] * 2 + (int)pow(2, i - j) - 1);
            arr[i] = m;
        }
        cout << arr[n] << endl;
    }
    return 0;
}