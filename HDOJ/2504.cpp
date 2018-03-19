#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a, int b)
{
    return b ? gcd(b, a%b) : a;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        for(int i=b+1;i<a;i++)
            if (gcd(i, a) == b)
            {
                cout << i << endl;
                break;
            }
    }
}