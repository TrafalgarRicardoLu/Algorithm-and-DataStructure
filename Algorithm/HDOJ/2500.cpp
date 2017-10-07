#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int num;
        cin >> num;
        for (int i = 1; i <= 3*num; i++)
        {
            for (int j = 1; j <= num; j++)
                cout << "HDU";
            cout << endl;
        }
    }
}