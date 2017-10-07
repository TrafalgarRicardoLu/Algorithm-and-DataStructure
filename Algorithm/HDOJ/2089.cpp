#include<iostream>
using namespace std;
int main()
{
    static int num[1000010] = { 0 };
    int n, m;
    char N[10];
    num[2] = 1; num[1] = 1;
    for (int i = 2; i < 1000000; i++)
    {
        int flag = 0;
        num[i] = num[i-1];
        int c = i;
        while (c)
        {
            if ((c - 62) % 100 == 0 || (c - 4) % 10 == 0)
            {
                flag = 1; break;
            }
            else
                c /= 10;
        }
        if (flag == 0)
            num[i]++;
    }
    while (cin >> n >> m && (n || m))
        cout << num[m] - num[n-1] << endl;
}             