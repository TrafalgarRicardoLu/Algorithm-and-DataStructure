#include<iostream>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
        while (n--)
        {
            int a, b;
            long long arr[1000] = {};
            arr[0] = 0; arr[1] = 1; arr[2] = 2;
            cin >> a >> b;
            if (b - a >= 3)
            {
                for (int i = 3; i <= b - a; i++)
                    arr[i] = arr[i - 1] + arr[i - 2];
                cout << arr[b - a] << endl;
            }
            else
                cout << arr[b - a] << endl;
            }
}