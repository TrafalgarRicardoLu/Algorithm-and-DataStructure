#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    long long arr[25] = {};
    arr[0] = 0; arr[1] = 0; arr[2] = 1;
    for (int i = 3; i <= 25; i++)
        arr[i] = (i - 1)*(arr[i - 1] + arr[i - 2]);
    while (cin >> n)
        cout << arr[n] << endl;
    return 0;
}