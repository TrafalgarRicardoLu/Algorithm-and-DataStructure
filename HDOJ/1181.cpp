#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int Count;
bool vis[1010];
string str[1010];
bool dfs(int n)
{
    vis[n] = 1;
    int len = str[n].length();
    if (str[n][len - 1] == 'm')
        return true;
    for (int i = 0; i < Count; i++)
    {
        if (vis[i])
            continue;
        if (str[i][0] == str[n][len - 1])
        {
            if (dfs(i))
                return true;
            vis[i] = 0;
        }
    }
    return false;
}
int main()
{
    string s;
    bool flag = 0;
    Count = 0;
    memset(vis, 0, sizeof(vis));
    while (cin >> s)
    {
        if (s == "0")
        {
            for (int i = 0; i < Count; i++)
                if (str[i][0] == 'b')
                {
                    if (dfs(i))
                    {
                        cout << "Yes." << endl;
                        flag = 1;
                        break;
                    }
                }
            if (!flag)
                cout << "No." << endl;
            flag = 0;
            Count = 0;
            memset(vis, 0, sizeof(vis));
        }
        else
            str[Count++] = s;
    }
    return 0;
}