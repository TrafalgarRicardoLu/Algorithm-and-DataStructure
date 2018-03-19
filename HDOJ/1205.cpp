#include<iostream>
#include<algorithm>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, sum = 0, Max = 0, num;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            sum += num;
            Max = max(num, Max);
        }
        if (Max <= sum - Max + 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}