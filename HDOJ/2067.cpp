#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long arr[40] = {},temp;
    arr[0] = 1,arr[1]=1;
    for (int i = 2; i <= 36; i++)
    {
        temp = 0;
        for (int j = 0; j <= i; j++)
            temp += arr[j] * arr[i - j - 1];
        arr[i] = temp;
    }
    int Case = 1,n;
    while (cin >> n&&n > 0)
        cout << Case++ << " " << n << " " << 2 * arr[n] << endl;
}