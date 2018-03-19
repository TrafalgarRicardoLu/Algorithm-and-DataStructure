#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    while (cin >> n && n)
    {
        int arr[1000], brr[1000];
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < n;i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
            cin >> brr[i];
        sort(arr, arr + n);
        sort(brr, brr + n);
        for (int i = 0; i < n; i++)
        {
            if (brr[i] > arr[i])
                sum2 += 2;
            else if (brr[i] == arr[i])
                sum1++, sum2++;
            else
                sum1 += 2;
        }
        cout << sum1 << " vs " << sum2 << endl;
    }
}