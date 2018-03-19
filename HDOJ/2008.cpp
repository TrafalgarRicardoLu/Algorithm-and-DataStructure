#include<iostream>
using namespace std;
int main()
{
    int n;
    double m;
    while (cin >> n)
    {
        if (n == 0)
            break;
        int count1 = 0, count2 = 0, count3 = 0;
        while (n--)
        {
            cin >> m;
            if (m < 0)
                count1++;
            else if (m == 0)
                count2++;
            else 
                count3++;
        }
        cout << count1 << " " << count2 << " " << count3  << endl;
    }
}