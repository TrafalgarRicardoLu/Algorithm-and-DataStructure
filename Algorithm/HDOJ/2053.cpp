#include<iostream>
using namespace std;
int main()
{
    int a;
    while (cin >> a)
    {
        int b = 0;
        for (int i = 1; i <= a; i++)
                if (a%i == 0)
                        b = !b;
        cout << b << endl;
    }    
}