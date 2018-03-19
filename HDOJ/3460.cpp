#include <string>
#include <algorithm>
#include <cstdlib>
#include <iostream>
using namespace std;
struct node
{
    int a[26];
}list[500010];
int ptr;
void Init()
{
    ptr = 0;
    for (int i = 0; i<500010; i++)
        for (int j = 0; j<26; j++)
            list[i].a[j] = -1;
}
void Insert(string s)
{
    int now = 0;
    int len = s.length();
    for (int i = 0; i<len; i++)
    {
        if (list[now].a[s[i] - 'a'] == -1)
        {
            list[now].a[s[i] - 'a'] = ++ptr;
            now = ptr;
        }
        else
            now = list[now].a[s[i] - 'a'];
    }

}
int main()
{
    int n;
    string s;
    while (cin >> n)
    {
        Init();
        int Max = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            Max = max(Max, (int)s.length());
            Insert(s);
        }
        cout << ptr * 2 + n - Max << endl;
    }
    return 0;
}