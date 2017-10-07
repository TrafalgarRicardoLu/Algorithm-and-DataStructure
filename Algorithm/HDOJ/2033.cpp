#include<iostream>
using namespace std;
int main()
{
    int n, AH, AM, AS, BH, BM, BS;
    while (cin >> n)
    {
        while (n--)
        {
            cin >> AH >> AM >> AS >> BH >> BM >> BS;
            int H = AH + BH;
            int M = AM + BM;
            int S = AS + BS;
            M += S / 60;
            S = S % 60;
            H += M / 60;
            M = M % 60;
            cout << H << " " << M << " " << S << endl;
        }
    }
}