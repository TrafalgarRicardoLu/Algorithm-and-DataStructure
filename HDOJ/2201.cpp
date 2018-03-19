#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double n, m;
    while (cin >> n >> m)
        cout << fixed << setprecision(2) << 1.0 / n << endl;
}