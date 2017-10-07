#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    while (cin >> n && n)
    {
        int arr[105],sum=0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum ^= arr[i];
        }
        if (sum == 0)
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            int count = 0;
            for (int i = 0; i < n; i++)
            {
                int num = sum^arr[i];
                if (arr[i] > num)
                    count++;
            }
            cout << count << endl;
        }
    }
}