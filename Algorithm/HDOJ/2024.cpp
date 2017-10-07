#include<iostream>
#include<cstring>
#include<cctype>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    char s[50];
    cin >> n;
    getchar();
    while(n--)
    {
        gets(s);
        if(s[0] != '_' && !isalpha(s[0]))
            {
                cout <<"no" <<endl;
                continue;
            }
            int count = 1;
            for(int i = 1;i <strlen(s);i++)
            {
                if(s[i]!= '_' && !isalnum(s[i]))
                {
                    count = 0;
                    break;
                }
                else
                    count = 1;
            }
            if(count == 1)
                cout << "yes"<<endl;
            else
                cout << "no"<<endl;

        }

}