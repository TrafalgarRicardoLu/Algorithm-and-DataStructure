#include<iostream>
#include<algorithm>
using namespace std;
int x[1000];
int y[1000];
int main()
{
    int a,b,i;
    while (cin >> a >> b && (a || b))
    {
        x[0] = a;
        y[0] = b;
        i = 1;
        while (cin >> a >> b && (a || b))
        {
            x[i] = a;
            y[i] = b;
            i++;
        }
        sort(x, x + i);
        sort(y, y + i);
        cout << x[0] << " " << y[0] << " " << x[i - 1] << " " << y[i - 1] << endl;
    }
    return 0;
}