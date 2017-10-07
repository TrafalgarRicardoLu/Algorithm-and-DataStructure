#include<iostream>
#include<cstdio>
using namespace std;
const char d[5] = { 'a','e','i','o','u' };
int main()
{
    int n;
    cin >> n;
    getchar();
        char b[100];
        while (n--)
        {
            int count[5] = {};
            gets_s(b, 100);;
            for (int i = 0; i < 5; i++)
                for (int j = 0; j < strlen(b); j++)
                    if (d[i] == b[j])
                        count[i]++;
            for(int i=0;i < 4;i++)
                cout << d[i] << ":" << count[i]<<endl ;
            cout << d[4] << ":" << count[4]<<endl;
            if (n > 0)
                cout << endl;
        }
    
}