#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
bool cmp(int a, int b)
{
    return a > b;
}
int main()
{
    int n;
    while (cin >> n && n)
    {
        int a[1000] = {}, b[1000] = {};
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort(a, a + n, cmp);
        sort(b, b + n, cmp);
        int tk = 0, wk = 0, tm = n - 1, wm = n - 1, win = 0;
        for (int i = 0; i < n; i++)
        {
            if(a[tk]>b[wk])
            {
                win++;
                wk++;
                tk++;
            }
            else if (a[tm] > b[wm])
            {
                win++;
                tm--;
                wm--;
            }
            else if (a[tm] < b[wk])
            {
                win--;
                tm--;
                wk++;
            }
        }
        cout << win*200 << endl;
    }
}