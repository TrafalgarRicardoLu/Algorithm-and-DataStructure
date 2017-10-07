#include<iostream>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
        while (n--)
        {
            int a;
            cin >> a;
            int arr[1000] = {};
            arr[1] = 1;
            arr[2] = 2;
            for (int i = 3; i <a; i++)
            {
                arr[i] = arr[i - 1] + arr[i - 2];
            }
            cout << arr[a-1] << endl;
        }
}