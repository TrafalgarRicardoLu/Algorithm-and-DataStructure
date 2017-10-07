#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        bool flag = 0;
        for (int i = 1; i <= 100; i++)
        {
            for (int j = i; j <= 100; j++)
            {
                for (int k = j; k <= 100; k++)
                {
                    if (i*i + j*j + k*k == n)
                    {
                        cout << i << " " << j << " " << k << endl;
                        flag = 1;
                        break;
                    }
                }
                if (flag)
                    break;
            }
            if (flag)
                break;
        }
    }
}