#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        long long num;
        cin >> num;
        cout << num*num*num<<" "<<(num+1)*(num+1)*(num+1) << endl;
    }
}