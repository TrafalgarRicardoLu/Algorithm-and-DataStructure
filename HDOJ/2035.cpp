#include<iostream>
using namespace std;
int main()
{
    int a, b;
    while (cin >> a >> b &&(a||b))
    {
        int c = 1;
        for (int i = 0; i < b; i++)
            c = c*a % 1000;
        cout << c % 1000 << endl;
    }
}