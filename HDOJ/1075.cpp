#include<iostream>
#include<algorithm>
#include<string>
#include<map>
#include<cstring>
using namespace std;
map<string, string>word;

int main()
{
    string a, b;
    word.clear();
    cin >> a;
    while (cin >> a, a != "END")
    {
        cin >> b;
        word[b] = a;
    }
    string str;
    cin >> str;
    getchar();
    while (getline(cin,str) && str!="END")
    {
        int len = str.length();
        char s[3001]; int j = 0;
        for (int i = 0; i<len; i++)
        {
            if (str[i] >= 'a'&&str[i] <= 'z')
                s[j++] = str[i];
            else
            {
                s[j] = '\0'; j = 0;
                b = s;
                if (word.find(b) == word.end())
                    cout << b;
                else
                    cout << word[b];
                cout << str[i];
            }
        }
        cout << endl;
    }
}