#include<iostream>
#include<cstring>  
#include<algorithm>  
using namespace std;
int powermod(long long a, long long  b, long long c)
{
    int ans = 1;
    a = a%c;
    while (b)
    {
        if ((b & 1 )== 1)
            ans = (ans*a) % c;
        b /= 2;
        a = (a*a) % c;
    }
    return ans;
}
int main()
{
    int T;
    while(cin >> T)
        while (T--)
        {
            long long a, b, c;
            cin >> a >> b >> c;
            cout << powermod(a,b,c)<<endl;
        }
}