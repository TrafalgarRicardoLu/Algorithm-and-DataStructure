#include<iostream>  
using namespace std;
int sg[1002], f[16] = { 1,2,3,5,8,13,21,34,55,89,144,233,377,610,987 };
void get_sg()
{
    sg[1002] = {};
    for (int i = 1; i <= 1000; i++) 
    {
        int h[16] = {};
        for (int j = 0; j < 15; j++)
        {
            if (i<f[j]) break;
            h[sg[i - f[j]]] = 1;
        }
        for (int j = 0; j < 15; j++)
            if (!h[j])
            {
                sg[i] = j;
                break;
            }
    }
}
int main(void)
{
    get_sg();
    int n, m, l;
    while (cin >> n >> m >> l && m)
    {
        if ((sg[n] ^ sg[m] ^ sg[l]))
            cout << "Fibo" << endl;
        else
            cout << "Nacci" << endl;
    }
    return 0;
}