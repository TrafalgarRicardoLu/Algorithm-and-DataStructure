#include<iostream>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        int arr[100];
        int ans = 1;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for(int i = 0;i < n-1;i++)
            for(int j = 0;j <n-1-i;j++)
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
        for (int i = 1;; i++)
        {
            int count = 0;
            ans = arr[n - 1] * i;
            for (int j = 0; j < n; j++)
            {
                if (ans % arr[j] == 0)
                    count++;
            }
            if (count == n)
            {
                cout << ans << endl;
                break;
            }
        }
    }
}