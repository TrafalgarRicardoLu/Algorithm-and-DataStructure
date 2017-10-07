#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, arr[105] = {}, t = 0;
    while (cin >> n&&n)
    {
        if (t)
            cout << endl;
        int  sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        sum /= n;
        int count = 0;
        for (int i = 0; i < n; i++)
            count += abs(arr[i] - sum);
        cout << count / 2<<endl;
        t = 1;
    }
    return 0;
}