#include<iostream>
#include<cstring>  
#include<algorithm>  
using namespace std;
struct sa
{
    int day;
    int score;
};
bool cmp(sa a, sa b)
{
    if (a.score == b.score)
        return a.day < b.day;
    else
        return a.score > b.score;
}
int main()
{
    int n, m;
    sa a[1000] = {};
    while(cin >> n)
        while (n--)
        {
            cin >> m;
            for (int i = 0; i < m; i++)
                cin >> a[i].day;
            for (int i = 0; i < m; i++)
                cin >> a[i].score;
            sort(a, a + m, cmp);
            int flag = 0, arr[1000] = {},sum=0;
            for (int i = 0; i < m; i++)
            {
                flag = 0;
                for (int j = a[i].day; j > 0; j--)
                    if (arr[j] == 0)
                    {
                        arr[j] = 1;
                        flag = 1;
                        break;
                    }
                if (flag == 0)
                    sum += a[i].score;
            }
            cout << sum << endl;

        }
}