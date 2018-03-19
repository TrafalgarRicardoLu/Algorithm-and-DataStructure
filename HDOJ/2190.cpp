#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
        while (n--)
        {
            long m, arr[35]; arr[1] = 1; arr[2] = 3; arr[3] = 5;
            for (int i = 4; i <= 30; i++)
                arr[i] = arr[i - 1] + arr[i - 2] * 2;
            while (cin >> m)
                cout << arr[m] << endl;
        }
}