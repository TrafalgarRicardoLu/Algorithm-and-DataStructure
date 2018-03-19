#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int m2 = 1, m3 = 1, m5 = 1, m7 = 1, i, temp1, temp2;
    long long a[6000] = {};
    a[1] = 1;
    for (i = 2; i <= 5842; i++)
    {
        temp1 = min(2 * a[m2],3*a[m3]);
        temp2 = min(5 * a[m5], 7 * a[m7]);
        a[i] = min(temp1, temp2);
        if (a[i] == 2 * a[m2]) m2++;
        if (a[i] == 3 * a[m3]) m3++;
        if (a[i] == 5 * a[m5]) m5++;
        if (a[i] == 7 * a[m7]) m7++;
    }
    int n;
    while (cin >> n&&n)
    {
        cout << "The " << n;
        if (n % 10 == 1 && n % 100 != 11)
            cout << "st";
        else if (n % 10 == 2 && n % 100 != 12)
            cout << "nd";
        else if (n % 10 == 3 && n % 100 != 13)
            cout << "rd";
        else
            cout << "th";
        cout << " humble number is " << a[n] << "." << endl;
    }
    
}