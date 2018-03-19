#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0, num, flag = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            sum ^= num;
            if (num > 1)
                flag = 1;
        }
        if (flag)
        {
            if (!sum)
                cout << "Brother" << endl;
            else
                cout << "John" << endl;
        }
        else
        {
            if (n & 1)
                cout << "Brother" << endl;
            else
                cout << "John" << endl;
        }
        
    }
}