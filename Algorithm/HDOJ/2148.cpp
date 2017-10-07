#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, num, arr[1005];
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            if (i == k)
                num = arr[i];
        }
        int count = 0;
        for (int i = 1; i <= n; i++)
            arr[i] > num ? count++ : count;
        cout << count << endl;
    }
}
