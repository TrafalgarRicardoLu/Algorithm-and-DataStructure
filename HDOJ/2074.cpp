// It was not accepted ,but I think it has same output ,so I put it here.
#include<iostream>
using namespace std;
int main()
{
    int n;
    char a, b; int k = 0;
    while (cin >> n >> a >> b)
    {    
        if (k == 1)
            cout << endl;
        if (n == 1)
            cout << a << endl;
        char arr[80][80] = {};
        int c = (n - 1) / 2; arr[c][c] = a;
        for(int i = 1;i<=c;i++)
            for (int j =-i; j <=i; j++)
            {
                if (i % 2 == 0)
                {
                    arr[c + i][c - j] = a;
                    arr[c - i][c - j] = a;
                    arr[c - j][c + i] = a;
                    arr[c - j][c - i] = a;
                }
                else if (i % 2 ==1)
                {
                    arr[c + i][c - j] = b;
                    arr[c - i][c - j] = b;
                    arr[c - j][c + i] = b;
                    arr[c - j][c - i] = b;
                }
            }
        arr[0][0] = ' '; arr[0][n - 1] = ' '; arr[n - 1][0] = ' '; arr[n - 1][n - 1] = ' ';
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << arr[i][j];
            cout << endl;
        }
        k = 1;
    }
}