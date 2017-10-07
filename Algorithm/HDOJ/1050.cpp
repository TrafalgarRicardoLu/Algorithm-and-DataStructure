#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
bool cmp(int a, int b)
{
    return a > b;
}
int main()
{
    int T;
    while(cin >> T)
        while (T--)
        {
            int n,a,b;
            cin >> n;
            int arr[250] = {};
            for (int i = 0; i < n; i++)
            {
                cin >> a >> b;
                if (a > b)
                    swap(a, b);
                int a1 = (a + 1) / 2;
                int b1 = (b + 1) / 2;
                for (int i = a1; i <= b1; i++)
                    arr[i]++;
            }
            sort(arr, arr + 200, cmp);
            cout <<  arr[0]* 10 << endl;
        }
}