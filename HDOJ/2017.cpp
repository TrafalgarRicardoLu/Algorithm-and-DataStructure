#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    char s[100];
    while (cin >> n)
    {
        while (n--)
        {
            int count = 0;
            cin >> s;
            for (int i = 0; i < strlen(s); i++)
            {
                if (isdigit(s[i]))
                    count++;
            }
            cout << count << endl;
        }
    }
}