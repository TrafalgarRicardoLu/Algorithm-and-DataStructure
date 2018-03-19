#include<iostream>
#include<iomanip>
using namespace std;
int set[1010] = {};

int find(int n)
{
    int r = n;
    while (r != set[r])
        r = set[r];
    return r;
}

int  main()
{
    int t;
    while (cin >> t)
        while (t--)
        {
            int n, m, a, b, count = 0;
            cin >> n >> m;
            for (int i = 0; i <= n; i++)
                set[i] = i;
            for (int i = 0; i < m; i++)
            {
                cin >> a >> b;
                int r1 = find(a);
                int r2 = find(b);
                if (r1 != r2)
                {
                    set[r2] = r1;
                    count++;
                }
            }
            cout << n  - count << endl;
        }
}