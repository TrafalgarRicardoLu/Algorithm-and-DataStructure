#include<iostream>
#include<algorithm>
using namespace std;
int fm(int a)
{
    int b = a;
    int ans = 1;
    a = a % 9;
    while (b)
    {
        if (b&1)
            ans = (ans * a) % 9;
        b >>= 1;
        a = (a * a) % 9;
    }
    return ans;
}
int main()
{
    long n;
    while (cin >> n && n)
    {
        int ans = fm(n);
        cout <<( ans ? ans : 9 )<< endl;
    }
}