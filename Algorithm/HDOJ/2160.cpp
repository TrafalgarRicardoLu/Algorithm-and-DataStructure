#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[25] = {};
    arr[1] = 1; arr[2] = 2; arr[3] = 3;
    for (int i = 3; i < 25; i++)
        arr[i] = arr[i-1] + arr[i - 2];
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << arr[n] << endl; 
    }
}