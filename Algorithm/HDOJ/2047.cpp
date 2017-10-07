#include<iostream>
using namespace std;
int main()
{
    int n;
    long long arr[51];
    arr[1] = 3; arr[2] = 8;
    for (int i = 3; i < 51; i++)
        arr[i] = 2*arr[i - 1] + 2*arr[i-2];
    while (cin >> n)
        cout << arr[n] << endl;
}