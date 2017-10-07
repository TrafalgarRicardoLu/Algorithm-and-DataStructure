#include<iostream>
#include<algorithm>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
    string s;
    while (getline(cin,s))
    {
        int arr[30] = {};
        for (int i = 0; i < s.length(); i++)
            arr[s[i] - 97]++;
        for (int i = 0; i < 26; i++)
            printf("%c:%d\n", i + 97, arr[i]);
        cout << endl;
    }
}