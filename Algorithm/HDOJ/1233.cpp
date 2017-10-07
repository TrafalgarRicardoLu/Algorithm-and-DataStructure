#include<iostream>
#include<iomanip>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
struct mer
{
    int a;
    int b;
    int c;
};

int set[10000] = {};
mer num[10000] = {};

int find(int n)
{
    int r = n;
    while (set[r] != r)
        r = set[r];
    return r;
}

int cmd(mer s,mer d)
{
    return s.c < d.c;
}

int main()
{
    int n;
    while (cin >> n && n)
    {
        for (int i = 1; i <= n; i++)
            set[i] = i;
        for (int i = 0; i < n*(n - 1) / 2; i++)
            scanf_s("%d %d %d", &num[i].a, &num[i].b, &num[i].c);
        sort(num, num + n*(n - 1) / 2, cmd);
        int count = 0, sum = 0, i = 0;
        for (int i = 0; i<n*(n - 1) / 2; i++)
        {
            int f1 = find(num[i].a);
            int f2 = find(num[i].b);
            if (f1 != f2)
            {
                set[f2] = f1;
                count++;
                sum += num[i].c;
            }
            if (count == n - 1)
                break;
        }
        cout << sum << endl;
    }

}