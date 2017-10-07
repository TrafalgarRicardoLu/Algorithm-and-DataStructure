#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,flag=0;
    while (cin >> n)
    {
        if (flag)cout << endl;
        int sum = 0;
        while (n)
        {
            if (n % 10 % 2 == 0)
                sum += n % 10;
            n /= 10;
        }
        cout << sum << endl;
        flag = 1;
    }
} 