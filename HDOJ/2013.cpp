#include<iostream>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        int sum = 1;
        for (int i = 1; i <= n; i++)
        {
            if (i == 1)
                sum = 1;
            else
                sum = (sum + 1) * 2;
        }
        cout << sum << endl;
    }
}