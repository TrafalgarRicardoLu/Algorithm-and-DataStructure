#include<iostream>
using namespace std;
int main()
{
    int a;
    while (cin >> a)
    {
        int p[100];
        int i = 0;
        while (a >0)
        {
            p[i] = a % 2;
            i++;
            a /= 2;
        }
        for (int j = i - 1; j >= 0; j--)
            cout << p[j];
        cout << endl;
    }
}