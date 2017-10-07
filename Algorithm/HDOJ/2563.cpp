#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
        while (n--)
        {
            long m, arr[25]; arr[1] = 3; arr[2] = 7;
            for (int i = 3; i <= 24; i++)
                arr[i] = 2*arr[i - 1] + arr[i - 2];
            while (cin >> m)
                cout << arr[m] << endl;
        }
}
