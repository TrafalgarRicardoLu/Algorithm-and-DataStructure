#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char a[100];
    double num, p;
    double sum = 0;
    while (cin >> a >> num >> p)
        sum += num*p;
    cout << fixed << setprecision(1) << sum << endl;
}      