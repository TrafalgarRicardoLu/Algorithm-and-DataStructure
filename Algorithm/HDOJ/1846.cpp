#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n, m;
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        if (n % (m + 1))
            cout << "first" << endl;
        else
            cout << "second" << endl;
    }
}