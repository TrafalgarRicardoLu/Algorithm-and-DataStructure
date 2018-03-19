#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char a;
    int b;
    int t = 1;
    while (cin >> a >> b&&a!='@')
    {
        getchar();
        if (t==0)cout << endl;
        t = 0;
        for(int i = 1;i <= b ;i++)
        {
            for (int j = 1; j < b+i-1; j++)
            {
                if (i == b)
                    cout << a;
                else
                {
                    if (j == b - i + 1 )
                        cout << a;
                    else
                        cout << " ";

                }
            }
                cout <<a<< endl;
        }
    }
    return 0;
}                     