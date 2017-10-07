#include<iostream>
using namespace std;
int main()
{
    int a, b;
    int n;
    int arr[48] = {};
    while (cin >> a && cin >> b && cin >> n)
    {
        if (a == 0 && b == 0 && n == 0)
            break;
        arr[1] = 1;
        arr[2] = 1;
        for (int i = 3; i < 48; i++)
            arr[i] =( (a * arr[i - 1] + b * arr[i - 2]) % 7 );

        cout << arr[n % 48] << endl;
    }
    return 0;
}
