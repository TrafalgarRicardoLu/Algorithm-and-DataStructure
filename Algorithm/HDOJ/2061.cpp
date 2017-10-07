#include <iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    int n,k;
    while (cin >> n)
    {
        while (n--)
        {
            cin >> k;
            double sum1 = 0, sum2 = 0;

            string s[1000];
            double c[1000], s1[1000];
            int flag = 0;
            for (int i = 0; i < k; i++)
            {
                cin >> s[i] >> c[i] >> s1[i];
                sum1 += c[i] * s1[i];
                sum2 += c[i];
                if (s1[i] < 60)
                    flag = 1;
            }
            if (n != 0)
                if (flag == 1)
                    cout << "Sorry!" << endl << endl;
                else
                    cout << fixed << setprecision(2) << 1.0*sum1 / sum2 << endl << endl;
            else if (n == 0)
                if (flag == 1)
                    cout << "Sorry!" << endl;
                else
                    cout << fixed << setprecision(2) << 1.0*sum1 / sum2 << endl;
        }
    }
}