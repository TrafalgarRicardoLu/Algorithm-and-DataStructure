#include<iostream>
using namespace std;
int main()
{
    int n, u, d;
    while (cin >> n >> u >> d && (n || u || d))
    {
        int sum = 0;
        while (n > u)
        {
            sum += 2;
            n -= (u - d);
        }
        cout << sum + 1 <<endl;
    }
}