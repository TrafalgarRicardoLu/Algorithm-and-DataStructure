#include<iostream>
#include<algorithm>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
    int n;
    string s;
    while (cin >> n && n)
    {
        cin >> s;
        int count = 0;
        char arr[200][200];
        for (int i = 0; i < s.length()/n; i++)
        {
            if (i & 1)
                for (int j = n - 1; j >= 0; j--)
                    arr[i][j] = s[count++];
            else
                for (int j = 0; j < n; j++)
                    arr[i][j] = s[count++];
        }
        for (int i = 0; i < n; i++)
            for (int j = 0; j < s.length() / n; j++)
                cout << arr[j][i] ;
        cout << endl;
    }
}