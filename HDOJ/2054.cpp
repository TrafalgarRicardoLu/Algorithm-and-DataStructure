#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
void cleanzero(char str[])
{
    int len = strlen(str), i;
    if (strstr(str, ".") != NULL)
    {
        for (i = len - 1; str[i] == '0'; i--)
        {
            str[i] = '\0';
        }
        if (str[i] == '.')
            str[i] = '\0';
    }
}
int main()
{
    char num1[100100], num2[100100];
    while (cin >> num1 >>num2)
    {
        cleanzero(num1);
        cleanzero(num2);
        if (strcmp(num1, num2))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}