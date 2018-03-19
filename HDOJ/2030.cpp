#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    string s;
    int n;
    while (cin >> n)
    {
        getchar();
        while (n--)
        {
            int count = 0;
            getline(cin, s);
            for (int i = 0; i < s.length(); i++)
                if (s[i] < 0)
                    count++;
            cout << count / 2 << endl;
        }

    }
}