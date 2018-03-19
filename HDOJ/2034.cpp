#include<iostream>
using namespace std;
int main()
{
    int m, n;
    while (cin >> n >> m && (n || m))
    {
        int arr[100], arr1[100];
        int ans[100];
        int a = 0, flag = 0, count = 0;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < m; i++)
            cin >> arr1[i];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i] == arr1[j])
                    flag = 1;
            }
            if (flag == 0)
                ans[a++] = arr[i];
            else
                count++;
            flag = 0;
        }
        if (count == n)
            cout << "NULL" ;
        else
        {
            for (int i = 0; i<a; i++)
                for (int j = i + 1; j < a; j++)
                {
                    if (ans[i] > ans[j])
                    {
                        int temp = ans[i];
                        ans[i] = ans[j];
                        ans[j] = temp;
                    }
                }
        }
        for (int i = 0; i < a; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
}