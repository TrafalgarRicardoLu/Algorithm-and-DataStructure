#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,count=0;
        cin >> n;
        int a = n / 2;
        int b = (n - a) * 2 / 3;
        int c = n - a - b;
        if (a % 10 != 0)
            count +=(int)( a / 10) + 1;
        else
            count += a / 10;
        if (b % 10 != 0)
            count +=(int)( b / 10) + 1;
        else
            count += b / 10;
        if (c % 10 != 0)
            count += (int)(c / 10) + 1;
        else
            count += c / 10;
        cout << count << endl;
    }
}