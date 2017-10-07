#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[60] = {};
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 3;
    arr[4] = 4;
    for (int i = 5; i < 56; i++)
        arr[i] = arr[i - 1] + arr[i - 3];
    while (cin >> n)
    {
        if (n == 0)
            break;
        else
            cout << arr[n] << endl;
    }
}