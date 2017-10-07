#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    char a;
    int b, n;
    while (cin >> n)
        while (n--)
        {
            cin >> a >> b;
            if (isupper(a))
                cout << a - 64 + b << endl;
            else if (islower(a))
                cout << -a + 96 + b << endl;
        }
}