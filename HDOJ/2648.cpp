#include<iostream>
#include<algorithm>
#include<map>
#include<string>
using namespace std;
bool cmp(int a, int b)
{
    return a > b;
}
map<string, int>  arr;
int brr[10005] = {};
int main()
{
    int n;
    string store;
    while (cin >> n)
    {
        arr.clear();
        for (int i = 0; i < n; i++)
        {
            cin >> store;
            arr[store] = 0;
        }
        int day,price;
        cin >> day;
        for (int i = 0; i < day; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> price >> store;
                arr[store] += price;
                brr[j] = arr[store];
            }
            sort(brr, brr + n, cmp);
            for (int i = 0; i < n; i++)
                if (brr[i] == arr["memory"])
                {
                    cout << i + 1 << endl;
                    break;
                }
        }
    }
    return 0;
}