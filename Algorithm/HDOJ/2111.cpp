#include<iostream>
#include<algorithm>
using namespace std;
struct node
{
    int p;
    int v;
};
node arr[105];
bool cmp(node a, node b)
{
    return a.p > b.p;
}
int main()
{
    int n;
    double V;
    while (cin >> V >> n&&V)
    {
        for (int i = 0; i < n; i++)
            cin >> arr[i].p >> arr[i].v;
        sort(arr, arr + n, cmp);
        double sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (V > arr[i].v)
            {
                sum += arr[i].v*arr[i].p;
                V -= arr[i].v;
            }
            else
            {
                sum += V*arr[i].p;
                break;
            }
        }
        cout << sum << endl;
    }
}
