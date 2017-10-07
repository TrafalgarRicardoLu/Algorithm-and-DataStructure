#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    int arr[101] = {};
    while (cin >> n)
    {
        double sum = 0;
        int max=0, min=100;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > max)
                max = arr[i];
            if (arr[i] < min)
                min = arr[i];
            sum += arr[i];
        }
        cout << fixed<< setprecision(2)<<(sum-max-min) / (n - 2) << endl;
    }
}