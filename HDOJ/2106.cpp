#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            int r, num,count=0;
            scanf_s("%d(%d)", &num, &r);
            while (num)
            {
                sum += num % 10 * pow(r, count++);
                num /= 10;
            }
        }
        cout << sum << endl;
    }
} 