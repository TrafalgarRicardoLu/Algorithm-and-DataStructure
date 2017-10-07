#include<iostream>
using namespace std;
int main()
{
    _int64 arr[55];
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i <= 50; i++)
        arr[i] = arr[i - 1] + arr[i - 2];
    int a;
    while (cin >> a && a != -1)
        cout << arr[a] << endl;
}