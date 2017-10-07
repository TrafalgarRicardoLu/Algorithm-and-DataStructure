#include <iostream>
using namespace std;
int main()
{
    int  n,m;
    while (cin >> n>>m && n && m)
    {
        int flag = 0;
        for (int i = 0; i < 100; i++)
        {
            int a = n * 100 + i;
            if (a %m == 0)
            {
                if (flag)
                    cout << " ";
                if (i < 10)
                    cout << 0;
                cout << i;
                flag = 1;
            }
        }
        cout << endl;
        
    }
}