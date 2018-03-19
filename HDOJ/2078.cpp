#include<iostream>
using namespace std;
int main()
{
    int t;
    while(cin >> t)
        while (t--)
        {
            int a[40];
            int n, m,min=100;
            cin >> n >> m;
            for (int i = 0; i < n; i++)
            {
                cin >> a[i];
                if (min > a[i])
                    min = a[i];
            }
            cout << (100 - min)*(100 - min) << endl;
        }

}