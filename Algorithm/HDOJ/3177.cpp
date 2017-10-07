#include<iostream>
#include<algorithm>
using namespace std;
struct node
{
    int a;
    int b;
};
node arr[1010] = {};
bool cmp(node a1, node b1)
{
    return a1.b - a1.a > b1.b - b1.a;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int v, n, flag=1;
        cin >> v >> n;
        for (int i = 0; i < n; i++)
            cin >> arr[i].a >> arr[i].b;
        sort(arr, arr + n, cmp);
        for (int i = 0; i < n; i++)
        {
            if (v >= arr[i].b)
                v -= arr[i].a;
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}