#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        string s;
        while (n--)
        {
            cin >> s;
            int count = 0;
            for (int i = 0; i < s.length() / 2; i++)
                if (s[i] == s[s.length() - 1 - i])
                    count++;
            if (count == s.length() / 2)
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
    }
}