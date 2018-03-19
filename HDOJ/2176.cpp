#include<iostream>
#include<algorithm>
using namespace std;
int arr[200000];
int main()
{
    std::ios::sync_with_stdio(false);
    int n;
    while (cin >> n && n)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum ^= arr[i];
        }
        if (sum)
        {
            cout << "Yes" << endl;
            for (int i = 0; i < n; i++)
            {
                int num = sum^arr[i];
                if (num < arr[i])
                    cout << arr[i] << " " << num << endl;
            }
        }
        else
            cout << "No" << endl;
    }
}