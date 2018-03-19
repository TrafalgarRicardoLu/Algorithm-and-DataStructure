#include<iostream>
#include<algorithm>
using namespace std;
int cmp(int a, int b)
{
    return a > b;
}
int main()
{
    int t;
    while (cin >> t)
        while (t--)
        {
            int n, arr[1005] = {}, flag = 0, sum = 0;
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
                sum += arr[i];
            }
            if (sum % 2)
                flag = 1;
            else
            {
                sort(arr, arr + n, cmp);
                while (arr[0])
                {
                    for (int j = 1; j <= arr[0]; j++)
                        arr[j]--;
                    arr[0] = 0;
                    sort(arr, arr + n, cmp);
                }
                sort(arr, arr + n);
                if (arr[0] < 0)
                    flag = 1;
            }
            if (!flag)
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
}