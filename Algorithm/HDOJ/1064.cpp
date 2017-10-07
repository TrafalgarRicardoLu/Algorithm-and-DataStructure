#include<iostream>
using namespace std;
int main()
{
    float arr[13];
    float sum = 0;
    for (int i = 0; i < 12; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "$" << sum / 12 << endl;
}