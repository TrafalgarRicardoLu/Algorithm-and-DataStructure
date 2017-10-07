#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[1000000] = {};
    int n,m;
    while (cin >> n)
    {
        while(n--)
        {
            cin >> m;
            for (int j = 0; j < m; j++)
                cin >> arr[j];
            sort(arr, arr + m);
            for (int i = 0; i < m; i++)
            {
                if (i < m - 1)
                    cout << arr[i] << " ";
                else
                    cout << arr[i] << endl;
            }
        }
    }
}