#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a, int b)
{
    return b ? gcd(b, a%b) : a;
}
int main()
{
    int n,c;
    cin >> n;
    while (n--)
    {
        cin >> c;
        int arr[1000] = {},ans=1;
        for (int i = 0; i < c; i++)
        {
            cin >> arr[i];
            ans = ans / gcd(ans, arr[i])*arr[i];
        }
        cout << ans << endl;
    }
    return 0;
}