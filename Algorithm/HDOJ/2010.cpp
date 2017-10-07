#include<iostream>
using namespace std;
int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        int count = 0;
        for (n; n <= m; n++)
        {
            int a = n / 100;
            int b = n % 100 / 10;
            int c = n % 10;
            if (a*a*a + b*b*b + c*c*c == n)
            {
                if (count >= 1)
                    cout << " ";
                cout << n;
                count++;
            }
        }
        if (count == 0)
            cout << "no" << endl;
        else
            cout << endl;
    }
}