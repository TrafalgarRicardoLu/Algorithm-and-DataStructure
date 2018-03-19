#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int i, n, r, x;
    char prt[1000], num[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
    while (cin >> n >> r) 
    {
        if (n<0) cout << "-";
        n = abs(n);
        for (i = 0; i >= 0; i++) {
            prt[i] = num[n%r];
            if (n / r == 0)break;
            n /= r;
        }
        for (; i >= 0; i--) cout << prt[i];
        cout << endl;
    }
}