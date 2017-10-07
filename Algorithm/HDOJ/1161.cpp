#include<iostream>
#include<algorithm>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
    string s;
    while (getline(cin, s))
    {
        for (int i = 0; i < s.length(); i++)
            if (s[i] <= 'Z'&&s[i] >= 'A')
                s[i] += 32;
        cout << s << endl;
    }
}