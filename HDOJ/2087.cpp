#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s, a;
    while (cin >> s && s[0] != '#')
    {
        cin >> a;
        int p = 0, count = 0;
        for (int i = 0; i < s.length();)
        {
            p = s.find(a, p);
            if (p != -1)
            {
                count++;
                p += a.length();
            }
            else
                i++;
        }
        cout << count << endl;
    }
    return 0;
}