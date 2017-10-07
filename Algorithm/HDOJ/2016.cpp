#include<iostream>
using namespace std;
int main()
{
    int n;
    int temp,j=0;
    int arr[101] = {};
    while (cin >> n)
    {
        if (n == 0)
            break;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n ; i++)
        {
            if (arr[i] < arr[j])
                j = i;
        }
        temp = arr[0];
        arr[0] = arr[j];
        arr[j] = temp;
        for (int i = 0; i < n-1; i++)
        {
            cout << arr[i] << " ";
        }
        cout <<arr[n-1]<< endl;
    }
}