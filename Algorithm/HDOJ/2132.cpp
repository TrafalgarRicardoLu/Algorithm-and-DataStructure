#include<iostream>
#include<algorithm>
using namespace std;
long long arr[100010] = {};
int main()
{
    long long n;
    arr[0] = 0; arr[1] = 1;
    for (long long i = 2; i <= 100005; i++)
    {
        if (i % 3 == 0)
            arr[i] = arr[i - 1] + i*i*i;
        else
            arr[i] = arr[i - 1] + i;
    }
    while (cin >> n && n >= 0 && n<=100000)
        cout << arr[n] << endl;
}