#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    while (cin >> n && n)
    {
        int a,sum=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;;
            sum ^= a;
        }
        if (sum == 0)
            cout << "Grass Win!" << endl;
        else
            cout << "Rabbit Win!" << endl;
    }
}