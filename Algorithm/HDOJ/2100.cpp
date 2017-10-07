#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    char a[205], b[205];
    while (cin >> a >> b)
    {
        int ans[205] = {}, a1[205] = {}, b1[205] = {};
        memset(ans, 0, 220);
        int count = 0;
        for (int i = strlen(a)-1; i >=0; i--)
            a1[count++] = a[i] - 'A';
        count = 0;
        for (int i = strlen(b)-1; i >=0; i--)
            b1[count++] = b[i] - 'A';
        int flag = 0;
        for (int i = 0; i <=204; i++)
        {
            ans[i] = a1[i] + b1[i] + flag;
            flag = ans[i] / 26;
            ans[i] %= 26;
        }
        int k;
        for (k = 204; k >= 0; k--)
            if (ans[k])
                break;
        for (k; k >= 0; k--)
            printf("%c", ans[k] + 'A');
        cout << endl;
    }
}