#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
        while (n--)
        {
            string s;
            cin >> s;
            int a = 0, b = 0, c = 0, d = 0;
            if (s.length() >= 8 && s.length() < 16)
            {
                for (int i = 0; i < s.length(); i++)
                {
                    if (isdigit(s[i]))
                        a = 1;
                    else if (islower(s[i]))
                        b = 1;
                    else if (isupper(s[i]))
                        c = 1;
                    else if (s[i] == '~' || s[i] == '!' || s[i] == '@' || s[i] == '#' || s[i] == '$' || s[i] == '%' || s[i] == '^')
                        d = 1;
                }
                if (a + b + c + d >= 3)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else
                cout << "NO" << endl;
        }
}