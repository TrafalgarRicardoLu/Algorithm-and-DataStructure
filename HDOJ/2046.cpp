#include<iostream>
using namespace std;
int main()
{
    int n;
    long long arr[51];
    arr[1] = 1; arr[2] = 2;
    for (int i = 3; i < 51; i++)
        arr[i] = arr[i - 1] + arr[i - 2];
    while (cin >> n)
        cout << arr[n] << endl;
}