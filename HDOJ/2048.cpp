#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n, m;
    long long arr[51];
    arr[1] = 0; arr[2] = 1;
    for (int i = 3; i < 21; i++)
        arr[i] = (i - 1)*(arr[i - 1] + arr[i - 2]);
    double b[20];
    b[1] = 1;
    for (int i = 2; i < 21; i++)
        b[i] = b[i - 1] * i;
    while(cin >> n)
        while (n--)
        {
            cin >> m;
            cout << fixed << setprecision(2) << arr[m] / b[m] * 100.0 << "%" << endl;
        }
}