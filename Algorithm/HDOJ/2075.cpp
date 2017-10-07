#include<iostream>
using namespace std;

int main()
{
    long long a,b;
    int n;
    while (cin >> n)
        while (n--)
        {
            cin >> a >> b;
            if (a%b == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    return 0;
}