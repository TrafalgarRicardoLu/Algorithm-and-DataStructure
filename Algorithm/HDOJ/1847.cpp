#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int maxn = 1010;
int arr[maxn];
int main()
{
    arr[1] = 1, arr[2] = 1;
    for (int i = 3; i <= 1000; i++)
    {
        if (!arr[i])
            for (int j = 0; i+(1 << j) <= 1000; j++)
                arr[i + (1 << j)] = 1;
    }
    
    int n;
    while (cin >> n)
    {
        if (arr[n])
            cout << "Kiki" << endl;
        else
            cout << "Cici" << endl;
    }
}