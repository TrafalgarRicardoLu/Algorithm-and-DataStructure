#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            int num = i;
            for (int j = 1; j < n; j++)
            {
                cout << num << " ";
                num += i;
            }
            cout << num << endl;
        }
    }
}