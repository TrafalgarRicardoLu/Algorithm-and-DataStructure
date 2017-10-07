#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    while (cin >> n && n)
    {
        int Max = 0,a;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            Max = max(a, Max);
        }
        cout << Max << endl;
    }
}