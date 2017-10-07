#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    unsigned long long arr[100] = {};
    arr[1] = 2;
    for (int i = 2; i <= 35; i++)
        arr[i] = arr[i - 1] * 3 + 2;
    while (cin >> n)
    {
        cout << arr[n] << endl;
    }
    return 0;
}