#include<iostream>  
#include<string>  
#include<algorithm>
#include<map>
using namespace std;
const int inf = INFINITY;
int main()
{
    int n, m, count1 = 0;
    while (cin >> n && n)
    {
        double arr[50][50] = {};
        int count = 0,flag=0;
        string a, b;
        double c;
        map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            mp[a] = count++;
        }
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            cin >> a >> c >> b;
            arr[mp[a]][mp[b]] = c;
        }
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                for (int k = 0; k < n; k++)
                    arr[j][k] = max(arr[j][k], arr[j][i] * arr[i][k]);
        for (int i = 0; i < n; i++)
            if (arr[i][i] > 1)
            {
                cout << "Case " << ++count1 << ": Yes" << endl;
                flag = 1;
                break;
            }
        if(!flag)
            cout<< "Case " << ++count1 << ": No" << endl;
    }
}