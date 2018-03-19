#include<iostream>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
        while (n--)
        {
            int a;
            cin >> a;
            int ans = 3;
            for (int i = 0; i < a; i++)
                ans = (ans - 1) * 2;
            cout << ans << endl;
        }
}