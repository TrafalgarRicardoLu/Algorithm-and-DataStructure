#include<iostream>
#include<algorithm>
using namespace std;
int fastmod(long long a)
{
    int ans = 1;
    long long b = a;
    a = a % 10;
    while (b>0)
    {
        if (b & 1)
            ans = ans * a % 10;
        b = b >> 1;
        a = a * a % 10;
    }
    return ans;
}

int main()
{
    long long  n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << fastmod(n) << endl;
    }
    return 0;
}