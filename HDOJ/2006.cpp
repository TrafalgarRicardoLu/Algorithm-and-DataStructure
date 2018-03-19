#include<iostream>
#include<iomanip>
using namespace std;
int main()
{    
    int n,a;
    while (cin >> n)
    {
        int sum = 1;
        while (n--)
        {
            cin >> a;
            if (a % 2 != 0)
                sum *= a;
        }
        cout << sum << endl;
    }
}
